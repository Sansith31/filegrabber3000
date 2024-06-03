#include <iostream>

struct Menu {
    static int MainMenu() {
    	int choice {0};

	    std::cout << "+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+" << std::endl;
	    std::cout << "|     > filegrabber3000 <       |" << std::endl;
	    std::cout << "+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+" << std::endl;
	    std::cout << "                               " << std::endl;
	    std::cout << "  ~ 1. Download                " << std::endl;
	    std::cout << "  ~ 2. Convert                 " << std::endl;
	    std::cout << "  ~ 0. Quit? lol               " << std::endl;
	    std::cout << "                               " << std::endl;
	    std::cout << " >>> Choose option: ";
	    std::cin >> choice;

	    return choice;
    }

    static int ConvertMenu() {
    	int choice {0};

	    std::cout << "+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+" << std::endl;
	    std::cout << "|    > Convert w/FFMPEG <       |" << std::endl;
	    std::cout << "+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+" << std::endl;
	    std::cout << " " << std::endl;
	    std::cout << "  ~ 1. .webm -> .mp4" << std::endl;
	    std::cout << "  ~ 2. .ts -> .mp4" << std::endl;
	    std::cout << "  ~ 3. .opus -> .mp3" << std::endl;
	    std::cout << "  ~ 0. Go back." << std::endl;
	    std::cout << " " << std::endl;
	    std::cout << " >>> Choose option: ";
	    std::cin >> choice;

	    return choice;
    }
};