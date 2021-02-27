//
// Created by Tuptc on 26/02/2021.
//

#ifndef TALLER_INDIVIDUAL_YESIKA_ROJAS_VASE_H
#define TALLER_INDIVIDUAL_YESIKA_ROJAS_VASE_H

#include <string>
#include <ostream>

class Vase {

public:
    Vase(const std::string &id, const std::string &material, const std::string &color, const std::string &size);

    const std::string &getId() const;

    void setId(const std::string &id);

    const std::string &getMaterial() const;

    void setMaterial(const std::string &material);

    const std::string &getColor() const;

    void setColor(const std::string &color);

    const std::string &getSize() const;

    void setSize(const std::string &size);

    friend std::ostream &operator<<(std::ostream &os, const Vase &vase);

    virtual ~Vase();

private:
    std::string id;
    std::string material;
    std::string color;
    std::string size;

};


#endif //TALLER_INDIVIDUAL_YESIKA_ROJAS_VASE_H
