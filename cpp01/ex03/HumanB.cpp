#include "HumanB.h"

// Eğer setWeapon fonksiyonu çağrıldıktan sonra, Weapon nesnesi
// başka bir yerde yok edilirse veya değiştirilirse, 
// HumanB sınıfının weapon üye değişkeni bu geçerliliğini yitirebilir ve geçersiz 
// bir bellek adresine işaret edebilir. Bu tür durumları yönetmek önemlidir.

HumanB::HumanB(std::string _name)
{
    this->name = _name;
    this->weapon = NULL;
}

void HumanB::attack() {
    std::cout << this->name << " attacks with their " << this->weapon->getType();
}

void HumanB::setWeapon(Weapon &weapon) {
    this->weapon = &weapon;
}

