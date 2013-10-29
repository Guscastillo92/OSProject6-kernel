
void printToScreen();


int main() {
	printToScreen();
	
	while(1){
	};
}

void printToScreen(){
	putInMemory(0xB000, 0x8140, 'A');
	putInMemory(0xB000, 0x8141, 0x7);
}
