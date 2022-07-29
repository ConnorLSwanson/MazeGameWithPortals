#include "PortalManager.h"
#include <time.h>


void PortalManager::NewPortal(int x, int y)
{
	allPortals.push_back(Point(x, y));
}

void PortalManager::Draw()
{
	std::cout << "O";
}

Point PortalManager::Teleport(int x, int y)
{
	int index = 0;
	// logic to find index of the collided portal
	for (auto it = std::begin(allPortals); it != std::end(allPortals); ++it)
	{
		if (it->x == x && it->y == y)
		{
			index = std::distance(allPortals.begin(), it);
		}
	}

	// logic to get a random new portal from the list of portals
	srand((unsigned)time(0));
	int x = rand() % allPortals.size();
	while (x == index && allPortals.size() > 1)
	{
		x = rand() % allPortals.size();
	}

	return allPortals[x];

}