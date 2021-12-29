#include <stdio.h>
#include <locale.h>
#include "Structs.cpp"

float calculate_health(person person)
{
	float health = person.skill.health * person.health;
	return health;
}

float calculate_damage(person person)
{
	float damage = person.skill.power * (person.power + (person.skill.weapon * person.weapon.quality * person.weapon.power));
	return damage;
}

float calculate_agility(person person)
{
	float agility = person.skill.agility * person.agility;
	return agility;
}

float calculate_intellect(person person)
{
	float intellect = person.skill.intellect * person.intellect;
	return intellect;
}

weapon set_default_weapon_stats()
{
	weapon weapon;
	weapon.name;
	weapon.power = 0;
	weapon.quality = 0;
	return weapon;
}

skill set_default_person_skills()
{
	skill skill;
	skill.health = 1.0;
	skill.power = 1.0;
	skill.agility = 1.0;
	skill.intellect = 1.0;
	skill.weapon = 1.0;
	return skill;
}

person set_default_person_stats()
{
	person person;
	person.health = 50.0;
	person.power = 20.0;
	person.agility = 20.0;
	person.intellect = 20.0;
	person.luck = 1.0;
	person.weapon = set_default_weapon_stats();
	person.skill = set_default_person_skills();
	return person;
}

void get_person_stats(person hero)
{
	printf("Жизненные силы: %f\t\n", calculate_health(hero));
	printf("Атака: %f\t\n", calculate_damage(hero));
	printf("Ловкость: %f\t\n", calculate_agility(hero));
	printf("Интелект: %f\t\n", calculate_intellect(hero));
	printf("Удача: %f\t\n", hero.luck);
}