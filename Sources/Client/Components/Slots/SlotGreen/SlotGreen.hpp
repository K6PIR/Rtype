/*
** EPITECH PROJECT, 2021
** CPP_rtype_2018
** File description:
** Created by Thomas BLENEAU
*/

#ifndef SLOTGREEN_HPP
#define SLOTGREEN_HPP

#include "../ASlot.hpp"

class SlotGreen : public ASlot {
public:
    SlotGreen(SFMLHandler const &sfmlHandler);

    SlotGreen(SlotGreen const &) = default;

    ~SlotGreen() override = default;

private:
    void createButtonReady();

    void createButtonPlus();

    void createButtonCancel();

    void createSlotUsername();

    void createShipSection();

    void validButton(Vector2D<std::string> const &paths, Vector2D<unsigned int> const &position,
                     Vector2D<unsigned int> const &size);

    void validAsset(std::string const &path);
};

#endif //SLOTGREEN_HPP
