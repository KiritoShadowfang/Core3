/*
 *	server/zone/managers/minigames/GamblingManager.h generated by engine3 IDL compiler 0.60
 */

#ifndef GAMBLINGMANAGER_H_
#define GAMBLINGMANAGER_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {
namespace objects {
namespace creature {

class CreatureObject;

} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature;

namespace server {
namespace zone {

class ZoneServer;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {

class Zone;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {
namespace objects {
namespace scene {

class SceneObject;

} // namespace scene
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::scene;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace terminal {
namespace gambling {

class GamblingTerminal;

} // namespace gambling
} // namespace terminal
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::terminal::gambling;

namespace server {
namespace zone {
namespace managers {
namespace minigames {
namespace events {

class GamblingEvent;

} // namespace events
} // namespace minigames
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::minigames::events;

#include "engine/util/Observer.h"

#include "engine/core/ManagedObject.h"

#include "engine/log/Logger.h"

#include "engine/lua/Lua.h"

#include "system/util/VectorMap.h"

#include "system/util/Vector.h"

#include "system/lang/ref/Reference.h"

namespace server {
namespace zone {
namespace managers {
namespace minigames {

class GamblingManager : public Observer {
public:
	GamblingManager();

	Vector<String>* getRoulette();

	void initializeSlotTimer();

	void initializeRouletteTimer();

	void initializeSlots();

	void initializeRouletteRed();

	void initializeRoulette();

	int notify(SceneObject* sceneObject);

	bool isHigh(int value);

	bool isLow(int value);

	bool isEven(int value);

	bool isOdd(int value);

	bool isBlack(int value);

	bool isRed(int value);

	void handleSlot(CreatureObject* player, bool cancel, bool other);

	void bet(CreatureObject* player, int amount, int target, int machineType);

	void bet(GamblingTerminal* terminal, CreatureObject* player, int amount, int target);

	void startGame(CreatureObject* player, int machineType);

	void startGame(GamblingTerminal* terminal);

	void leaveTerminal(CreatureObject* player, int machineType);

	void registerPlayer(GamblingTerminal* terminal, CreatureObject* player);

	void refreshRouletteMenu(CreatureObject* player);

	void continueGame(GamblingTerminal* terminal);

	void stopGame(GamblingTerminal* terminal, bool cancel);

	void calculateOutcome(GamblingTerminal* terminal);

	unsigned int createWindow(GamblingTerminal* terminal, CreatureObject* player);

	unsigned int createPayoutWindow(CreatureObject* player);

	unsigned int createSlotWindow(CreatureObject* player, unsigned int payoutBoxID);

	unsigned int createRouletteWindow(CreatureObject* player);

	void createEvent(GamblingTerminal* terminal, int time);

	bool isPlaying(CreatureObject* player);

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	GamblingManager(DummyConstructorParameter* param);

	virtual ~GamblingManager();

	friend class GamblingManagerHelper;
};

} // namespace minigames
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::minigames;

namespace server {
namespace zone {
namespace managers {
namespace minigames {

class GamblingManagerImplementation : public ObserverImplementation, public Logger {
protected:
	VectorMap<ManagedReference<CreatureObject* >, ManagedReference<GamblingTerminal* > > slotGames;

	VectorMap<ManagedReference<CreatureObject* >, ManagedReference<GamblingTerminal* > > rouletteGames;

	Vector<String> roulette;

	Vector<String> red;

	Vector<int> slot;

	Vector<int> slotTimer;

	Vector<int> rouletteTimer;

public:
	GamblingManagerImplementation();

	GamblingManagerImplementation(DummyConstructorParameter* param);

	Vector<String>* getRoulette();

	void initializeSlotTimer();

	void initializeRouletteTimer();

	void initializeSlots();

	void initializeRouletteRed();

	void initializeRoulette();

	int notify(SceneObject* sceneObject);

	bool isHigh(int value);

	bool isLow(int value);

	bool isEven(int value);

	bool isOdd(int value);

	bool isBlack(int value);

	bool isRed(int value);

	void handleSlot(CreatureObject* player, bool cancel, bool other);

protected:
	void refreshSlotMenu(CreatureObject* player, GamblingTerminal* terminal);

public:
	void bet(CreatureObject* player, int amount, int target, int machineType);

	void bet(GamblingTerminal* terminal, CreatureObject* player, int amount, int target);

	void startGame(CreatureObject* player, int machineType);

	void startGame(GamblingTerminal* terminal);

	void leaveTerminal(CreatureObject* player, int machineType);

	void registerPlayer(GamblingTerminal* terminal, CreatureObject* player);

	void refreshRouletteMenu(CreatureObject* player);

	void continueGame(GamblingTerminal* terminal);

	void stopGame(GamblingTerminal* terminal, bool cancel);

	void calculateOutcome(GamblingTerminal* terminal);

	unsigned int createWindow(GamblingTerminal* terminal, CreatureObject* player);

	unsigned int createPayoutWindow(CreatureObject* player);

	unsigned int createSlotWindow(CreatureObject* player, unsigned int payoutBoxID);

	unsigned int createRouletteWindow(CreatureObject* player);

	void createEvent(GamblingTerminal* terminal, int time);

	bool isPlaying(CreatureObject* player);

	WeakReference<GamblingManager*> _this;

	operator const GamblingManager*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~GamblingManagerImplementation();

	void finalize();

	void _initializeImplementation();

	void _setStub(DistributedObjectStub* stub);

	void lock(bool doLock = true);

	void lock(ManagedObject* obj);

	void rlock(bool doLock = true);

	void wlock(bool doLock = true);

	void wlock(ManagedObject* obj);

	void unlock(bool doLock = true);

	void runlock(bool doLock = true);

	void _serializationHelperMethod();
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);

	friend class GamblingManager;
};

class GamblingManagerAdapter : public ObserverAdapter {
public:
	GamblingManagerAdapter(GamblingManager* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeSlotTimer();

	void initializeRouletteTimer();

	void initializeSlots();

	void initializeRouletteRed();

	void initializeRoulette();

	int notify(SceneObject* sceneObject);

	bool isHigh(int value);

	bool isLow(int value);

	bool isEven(int value);

	bool isOdd(int value);

	bool isBlack(int value);

	bool isRed(int value);

	void handleSlot(CreatureObject* player, bool cancel, bool other);

	void bet(CreatureObject* player, int amount, int target, int machineType);

	void bet(GamblingTerminal* terminal, CreatureObject* player, int amount, int target);

	void startGame(CreatureObject* player, int machineType);

	void startGame(GamblingTerminal* terminal);

	void leaveTerminal(CreatureObject* player, int machineType);

	void registerPlayer(GamblingTerminal* terminal, CreatureObject* player);

	void refreshRouletteMenu(CreatureObject* player);

	void continueGame(GamblingTerminal* terminal);

	void stopGame(GamblingTerminal* terminal, bool cancel);

	void calculateOutcome(GamblingTerminal* terminal);

	unsigned int createWindow(GamblingTerminal* terminal, CreatureObject* player);

	unsigned int createPayoutWindow(CreatureObject* player);

	unsigned int createSlotWindow(CreatureObject* player, unsigned int payoutBoxID);

	unsigned int createRouletteWindow(CreatureObject* player);

	void createEvent(GamblingTerminal* terminal, int time);

	bool isPlaying(CreatureObject* player);

};

class GamblingManagerHelper : public DistributedObjectClassHelper, public Singleton<GamblingManagerHelper> {
	static GamblingManagerHelper* staticInitializer;

public:
	GamblingManagerHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<GamblingManagerHelper>;
};

} // namespace minigames
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::minigames;

#endif /*GAMBLINGMANAGER_H_*/
