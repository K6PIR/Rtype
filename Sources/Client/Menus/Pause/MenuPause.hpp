/*
** EPITECH PROJECT, 2021
** CPP_rtype_2018
** File description:
** Created by Thomas BLENEAU
*/

#ifndef MENUPAUSE_HPP
#define MENUPAUSE_HPP

#include "../AMenu.hpp"
#include "../../SFMLHandler/SFMLHandler.hpp"
#include "../../Components/Button/Button.hpp"
#include "../../../Communication/CommunicationTCP/CommunicationTCPClient/CommunicationTCPClient.hpp"


class MenuPause: public AMenu {
public:
    MenuPause(SFMLHandler const &sfmlHandler, std::string &userName, std::string &serverName, CommunicationTCPClient &server);
    MenuPause(MenuPause const &) = default;
    ~MenuPause() override = default;
    InstanceStatus launch(enum Event const &event, InstanceStatus const &last) override;

private:
    /* FONCTIONS */
    void draw();
    InstanceStatus manageEvent(enum Event const &event);
    InstanceStatus buttonPressed(Vector2D<int> const &position);
    InstanceStatus buttonReleased(Vector2D<int> const &position);

    void initializeAssets();
    void initializeButtons();
    void validAsset(std::string const &name, std::string const &path, Vector2D<unsigned int> const &position, Vector2D<unsigned int> const &size);
    void validButton(Vector2D<std::string> const &names, Vector2D<std::string> const &paths, Vector2D<unsigned int> const &position, Vector2D<unsigned int> const &size);

    void createButton(Vector2D<std::string> const &names, Vector2D<std::string> const &paths, Vector2D<unsigned int> const &position, Vector2D<unsigned int> const &size);
    void setButtonInstance(std::string const &name, InstanceStatus const &status);

    /* VARIABLES */
    std::unordered_map<std::string, Button> _buttons;
    CommunicationTCPClient &_server;
};

#endif //MENUPAUSE_HPP
