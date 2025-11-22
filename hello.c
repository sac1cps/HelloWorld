#include <stdio.h>
#include <string.h>

int main(void) {
    char name[100];
    int birth_year;
    
    // Get user's name
    printf("What is your name? ");
    fgets(name, sizeof(name), stdin);
    // Remove newline character
    name[strcspn(name, "\n")] = 0;
    
    // Get user's birth year
    printf("What year were you born? ");
    scanf("%d", &birth_year);
    
    // Calculate Chinese zodiac sign
    // 2020 was the Year of the Rat (0), so we use (year - 2020) % 12
    // Adjusting: 1900 was Rat, so (year - 1900) % 12
    int zodiac_index = (birth_year - 1900) % 12;
    if (zodiac_index < 0) zodiac_index += 12; // Handle negative years
    
    const char* zodiac_names[] = {
        "Rat", "Ox", "Tiger", "Rabbit", "Dragon", "Snake",
        "Horse", "Goat", "Monkey", "Rooster", "Dog", "Pig"
    };
    
    const char* zodiac_chinese[] = {
        "鼠", "牛", "虎", "兔", "龙", "蛇",
        "马", "羊", "猴", "鸡", "狗", "猪"
    };
    
    const char* zodiac_meanings[] = {
        "Rats are quick-witted, resourceful, and versatile. They are intelligent and adaptable, making them excellent problem solvers.",
        "Oxen are diligent, dependable, and determined. They are hardworking and methodical, known for their strong sense of responsibility.",
        "Tigers are brave, confident, and competitive. They are natural leaders with a strong sense of justice and adventure.",
        "Rabbits are gentle, quiet, and elegant. They are kind-hearted, artistic, and have a strong appreciation for beauty and peace.",
        "Dragons are confident, intelligent, and enthusiastic. They are natural-born leaders with charisma and ambition.",
        "Snakes are wise, intuitive, and mysterious. They are deep thinkers with great insight and a calm demeanor.",
        "Horses are energetic, independent, and cheerful. They are free-spirited, adventurous, and love to explore new horizons.",
        "Goats are gentle, calm, and creative. They are artistic, compassionate, and have a strong sense of aesthetics.",
        "Monkeys are witty, intelligent, and curious. They are quick learners with a great sense of humor and adaptability.",
        "Roosters are observant, hardworking, and courageous. They are confident, talented, and have a strong sense of time and punctuality.",
        "Dogs are loyal, honest, and reliable. They are faithful friends with a strong sense of justice and responsibility.",
        "Pigs are compassionate, generous, and diligent. They are easygoing, optimistic, and have a great capacity for enjoyment."
    };
    
    const char* fortunes[] = {
        "Today is a day of opportunities! Your quick thinking will help you solve problems that others find challenging. Trust your instincts.",
        "Your steady approach will pay off today. Focus on completing tasks methodically, and you'll achieve your goals with excellence.",
        "Adventure awaits! Today is perfect for taking calculated risks. Your courage will inspire others and lead to exciting new experiences.",
        "A peaceful day is ahead. Take time to appreciate the beauty around you and connect with loved ones. Your gentle nature will bring harmony.",
        "Your leadership qualities shine today! Others will look to you for guidance. Use your charisma to inspire and motivate your team.",
        "Trust your intuition today. Your deep wisdom will help you see through complex situations. Take time for quiet reflection.",
        "Freedom and exploration are in the stars! Today is perfect for trying something new or taking a journey. Embrace your adventurous spirit.",
        "Creativity flows through you today. Express yourself through art, music, or any creative pursuit. Your aesthetic sense will guide you.",
        "Your wit and humor will lighten the mood today. Use your intelligence to find clever solutions to challenges. Stay curious!",
        "Your hard work is noticed today. Your attention to detail and punctuality will be rewarded. Keep up the excellent effort!",
        "Loyalty and friendship are highlighted today. Your honest and reliable nature will strengthen your relationships. Stand up for what's right.",
        "Generosity brings joy today. Share your optimism and compassion with others. Your easygoing nature will create positive energy around you."
    };
    
    printf("\n=== Chinese Zodiac Reading for %s ===\n\n", name);
    printf("Birth Year: %d\n", birth_year);
    printf("Your Chinese Zodiac Sign: %s (%s)\n\n", zodiac_names[zodiac_index], zodiac_chinese[zodiac_index]);
    printf("What this means:\n%s\n\n", zodiac_meanings[zodiac_index]);
    printf("Your Fortune for Today:\n%s\n\n", fortunes[zodiac_index]);
    
    return 0;
}

