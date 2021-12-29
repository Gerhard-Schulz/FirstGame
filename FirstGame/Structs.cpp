struct weapon
{
	char name[50];
	float power;
	float quality;
};

struct skill
{
	float health;
	float power;
	float agility;
	float intellect;
	float weapon;
};

struct person
{
	float health;
	float power;
	float agility;
	float intellect;
	float luck;
	weapon weapon;
	skill skill;
};