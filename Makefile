run:
	mkdir -p build
	g++ -std=c++17 -o build/main.out src/main.cpp src/student.cpp src/school.cpp -Iincludes
	./build/main.out


test:
	mkdir -p build
	g++ -std=c++17 -o build/test.out tests/school_test.cpp src/student.cpp src/school.cpp -Iincludes -lgtest -lgtest_main -pthread
	./build/test.out