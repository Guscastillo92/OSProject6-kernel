/// Making the file for the Kernel
//Gustavo Castillo


void printToScreen();


int main(int argc, char **argv) {
	printToScreen();
	
	while(true){
	};
}

void printToScreen(){
	putInMemory(0xB000, 0x8140, 'A');
	putInMemory(0xB000, 0x8141, 0x7);

}
