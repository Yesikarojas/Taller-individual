//
// Created by Tuptc on 26/02/2021.
//

#include "Vase.h"

Vase::Vase(const std::string &id, const std::string &material, const std::string &color, const std::string &size) : id(
        id), material(material), color(color), size(size) {}

const std::string &Vase::getId() const {
    return id;
}

void Vase::setId(const std::string &id) {
    Vase::id = id;
}

const std::string &Vase::getMaterial() const {
    return material;
}

void Vase::setMaterial(const std::string &material) {
    Vase::material = material;
}

const std::string &Vase::getColor() const {
    return color;
}

void Vase::setColor(const std::string &color) {
    Vase::color = color;
}

const std::string &Vase::getSize() const {
    return size;
}

void Vase::setSize(const std::string &size) {
    Vase::size = size;
}

std::ostream &operator<<(std::ostream &os, const Vase &vase) {
    os << "id: " << vase.id << " material: " << vase.material << " color: " << vase.color << " size: " << vase.size;
    return os;
}

Vase::~Vase() {

}

