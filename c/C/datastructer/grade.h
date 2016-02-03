#define COURSE_NUMBER 4
#define MAX_SIZE 35
struct student{
	int id;
	double grades[COURSE_NUMBER];
	double avg;
	double tot;
};

struct clas{
	struct student stu[MAX_SIZE];
	int size;
};