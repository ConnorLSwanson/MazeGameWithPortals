#pragma once
#include <vector>
#include <iostream>
#include "PlacableActor.h"


class PortalManager : public PlacableActor 
{
public:
	// std::vector<strPortal> allPortals;
	std::vector<Point> allPortals;

	PortalManager();
	PortalManager(int x, int y);
	void NewPortal(int x, int y);
	virtual ActorType GetType() override { return ActorType::Portal; }
	virtual void Draw() override;
	Point Teleport(int x, int y);
};