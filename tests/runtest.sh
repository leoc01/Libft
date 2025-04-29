compile_n_run() {
	make -s fclean
	clear
	echo "Running tests..."
	make -s
	clear
	make -s

	./test
	if ! (cd ../ && norminette | grep "Error"); then
		echo "Norminette: OK!"
	fi
	make -s fclean
}

look_files() {
	find . ../ -maxdepth 1 \( -name "*.c" -o -name "*.h" \) | sort
}

files=$(look_files)
sum=$(echo checksum.md5)

compile_n_run
md5sum $files > $sum

while :; do
	files=$(look_files)
	if ! md5sum --status -c $sum; then
		compile_n_run
		md5sum $files > $sum
	fi
	sleep 0.7;
done

