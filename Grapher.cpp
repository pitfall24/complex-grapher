//
// Created by Phineas on 7/27/23
//
#include <iostream>
#include <vector>
#include "ComplexNumber.h"
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

ComplexNumber function(ComplexNumber& z);

int main() {
    u_int16_t w = 2560, h = 1440;

    sf::RenderWindow window(sf::VideoMode(w, h), "Grapher");
    window.setFramerateLimit(60);

    while (window.isOpen()) {
        window.display();
    }
}

ComplexNUmber function(ComplexNUmber& z) {
    return z * (~z);
}
