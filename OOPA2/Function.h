#pragma once
#include "Character.h"
#include "World.h"
#include "object.h"

void askPlayer(Character* &playerSelection);

void drawBoard(World* ptr);

void clear(World* ptr, int x, int y);

void ItemPickupCheck(Character* player, object** oebjects);

