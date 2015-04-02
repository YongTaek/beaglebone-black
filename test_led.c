#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

#define port_a "67"
#define port_b "68"
#define port_c "44"
#define port_d "26"
#define port_e "66"
#define port_f "69"
#define port_g "45"
#define on "1"
#define off "0"

void gpio_export_init(){
	int fd = open("/sys/class/gpio/export",O_WRONLY || O_TRUNC);
	if(fd<0){
		printf("open error\n");
	}
	write(fd,port_a,sizeof(port_a));
	write(fd,port_b,sizeof(port_b));
	write(fd,port_c,sizeof(port_c));
	write(fd,port_d,sizeof(port_d));
	write(fd,port_e,sizeof(port_e));
	write(fd,port_f,sizeof(port_f));
	write(fd,port_g,sizeof(port_g));
	close(fd);
}

void gpio_unexport(){
	int fd=open("/sys/class/gpio/unexport",O_WRONLY || O_TRUNC);
	if(fd<0){
		printf("open error\n");
	}
	write(fd,port_a,sizeof(port_a));
	write(fd,port_b,sizeof(port_b));
	write(fd,port_c,sizeof(port_c));
	write(fd,port_d,sizeof(port_d));
	write(fd,port_e,sizeof(port_e));
	write(fd,port_f,sizeof(port_f));
	write(fd,port_g,sizeof(port_g));
	close(fd);
}

void fnd_port_a(char *input){
	int value = open("/sys/class/gpio/gpio67/value",O_WRONLY || O_TRUNC);
	int active_low = open("/sys/class/gpio/gpio67/active_low",O_WRONLY || O_TRUNC);
	int direction = open("/sys/class/gpio/gpio67/direction",O_WRONLY || O_TRUNC);
	if(active_low<0){
		printf("port a active_low open error\n");
	}
	if(direction<0){
		printf("port a direction open error\n");
	}
	if(value<0){
		printf("port a vlaue open error\n");
	}
	else{
		write(active_low,"0",sizeof("0"));
		write(direction,"out",sizeof("out"));
		write(value,input,strlen(input));
	}
	close(value);
	close(active_low);
	close(direction);
}

void fnd_port_b(char *input){
	int value = open("/sys/class/gpio/gpio68/value",O_WRONLY || O_TRUNC);
	int active_low = open("/sys/class/gpio/gpio68/active_low",O_WRONLY || O_TRUNC);
	int direction = open("/sys/class/gpio/gpio68/direction",O_WRONLY || O_TRUNC);
	if(active_low<0){
		printf("port a active_low open error\n");
	}
	if(direction<0){
		printf("port a direction open error\n");
	}
	if(value<0){
		printf("port b vlaue open error\n");
	}
	else{
		write(active_low,"0",sizeof("0"));
		write(direction,"out",sizeof("out"));
		write(value,input,strlen(input));
	}
	close(value);
	close(active_low);
	close(direction);
}

void fnd_port_c(char *input){
	int value = open("/sys/class/gpio/gpio44/value",O_WRONLY || O_TRUNC);
	int active_low = open("/sys/class/gpio/gpio44/active_low",O_WRONLY || O_TRUNC);
	int direction = open("/sys/class/gpio/gpio44/direction",O_WRONLY || O_TRUNC);
	if(active_low<0){
		printf("port a active_low open error\n");
	}
	if(direction<0){
		printf("port a direction open error\n");
	}	
	if(value<0){
		printf("port c vlaue open error\n");
	}
	else{
		write(active_low,"0",sizeof("0"));
		write(direction,"out",sizeof("out"));		
		write(value,input,strlen(input));
	}
	close(value);
	close(active_low);
	close(direction);
}

void fnd_port_d(char *input){
	int value = open("/sys/class/gpio/gpio26/value",O_WRONLY || O_TRUNC);
	int active_low = open("/sys/class/gpio/gpio26/active_low",O_WRONLY || O_TRUNC);
	int direction = open("/sys/class/gpio/gpio26/direction",O_WRONLY || O_TRUNC);
	if(active_low<0){
		printf("port a active_low open error\n");
	}
	if(direction<0){
		printf("port a direction open error\n");
	}	
	if(value<0){
		printf("port d vlaue open error\n");
	}
	else{
		write(active_low,"0",sizeof("0"));
		write(direction,"out",sizeof("out"));		
		write(value,input,strlen(input));
	}
	close(value);
	close(active_low);
	close(direction);
}

void fnd_port_e(char *input){
	int value = open("/sys/class/gpio/gpio66/value",O_WRONLY || O_TRUNC);
	int active_low = open("/sys/class/gpio/gpio66/active_low",O_WRONLY || O_TRUNC);
	int direction = open("/sys/class/gpio/gpio66/direction",O_WRONLY || O_TRUNC);
	if(active_low<0){
		printf("port a active_low open error\n");
	}
	if(direction<0){
		printf("port a direction open error\n");
	}	
	if(value<0){
		printf("port e vlaue open error\n");
	}
	else{
		write(active_low,"0",sizeof("0"));
		write(direction,"out",sizeof("out"));		
		write(value,input,strlen(input));
	}
	close(value);
	close(active_low);
	close(direction);
}

void fnd_port_f(char *input){
	int value = open("/sys/class/gpio/gpio69/value",O_WRONLY || O_TRUNC);
	int active_low = open("/sys/class/gpio/gpio69/active_low",O_WRONLY || O_TRUNC);
	int direction = open("/sys/class/gpio/gpio69/direction",O_WRONLY || O_TRUNC);
	if(active_low<0){
		printf("port a active_low open error\n");
	}
	if(direction<0){
		printf("port a direction open error\n");
	}	
	if(value<0){
		printf("port f vlaue open error\n");
	}
	else{
		write(active_low,"0",sizeof("0"));
		write(direction,"out",sizeof("out"));		
		write(value,input,strlen(input));
	}
	close(value);
	close(active_low);
	close(direction);
}

void fnd_port_g(char *input){
	int value = open("/sys/class/gpio/gpio45/value",O_WRONLY || O_TRUNC);
	int active_low = open("/sys/class/gpio/gpio45/active_low",O_WRONLY || O_TRUNC);
	int direction = open("/sys/class/gpio/gpio45/direction",O_WRONLY || O_TRUNC);
	if(active_low<0){
		printf("port a active_low open error\n");
	}
	if(direction<0){
		printf("port a direction open error\n");
	}	
	if(value<0){
		printf("port g vlaue open error\n");
	}
	else{
		write(active_low,"0",sizeof("0"));
		write(direction,"out",sizeof("out"));		
		write(value,input,strlen(input));
	}
	close(value);
	close(active_low);
	close(direction);
}
void light_zero(){
	fnd_port_a(on);
	fnd_port_b(on);
	fnd_port_c(on);
	fnd_port_d(on);
	fnd_port_e(on);
	fnd_port_f(on);
}
void light_one(){
	fnd_port_b(on);
	fnd_port_c(on);
}
void light_two(){
	fnd_port_d(on);
	fnd_port_e(on);
	fnd_port_g(on);
	fnd_port_b(on);
	fnd_port_a(on);
}
void light_three(){
	fnd_port_d(on);
	fnd_port_e(on);
	fnd_port_f(on);
	fnd_port_a(on);
	fnd_port_g(on);
}
void light_four(){
	fnd_port_c(on);
	fnd_port_e(on);
	fnd_port_g(on);
	fnd_port_f(on);
}
void light_five(){
	fnd_port_d(on);
	fnd_port_c(on);
	fnd_port_g(on);
	fnd_port_f(on);
	fnd_port_a(on);
}
void light_six(){
	fnd_port_c(on);
	fnd_port_b(on);
	fnd_port_a(on);
	fnd_port_f(on);
	fnd_port_g(on);
}
void light_seven(){
	fnd_port_c(on);
	fnd_port_d(on);
	fnd_port_e(on);
	fnd_port_f(on);
}
void light_eight(){
	fnd_port_a(on);
	fnd_port_b(on);
	fnd_port_c(on);
	fnd_port_d(on);
	fnd_port_e(on);
	fnd_port_f(on);
	fnd_port_g(on);
}
void light_nine(){
	fnd_port_g(on);
	fnd_port_c(on);
	fnd_port_d(on);
	fnd_port_e(on);
	fnd_port_f(on);
}
void light_off(){
	fnd_port_a(off);
	fnd_port_b(off);
	fnd_port_c(off);
	fnd_port_d(off);
	fnd_port_e(off);
	fnd_port_f(off);
	fnd_port_g(off);
}
int main(int argc, char const *argv[])
{
	gpio_export_init();
	while(1){
		light_zero();
		sleep(1);
		light_off();
		light_one();
		sleep(1);
		light_off();
		light_two();
		sleep(1);
		light_off();
		light_three();
		sleep(1);
		light_off();
		light_four();
		sleep(1);
		light_off();
		light_five();
		sleep(1);
		light_off();
		light_six();
		sleep(1);
		light_off();
		light_seven();
		sleep(1);
		light_off();
		light_eight();
		sleep(1);
		light_off();
		light_nine();
		sleep(1);
		light_off();
	}
	gpio_unexport();
	return 0;
}