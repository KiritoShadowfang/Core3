/*
 *	server/zone/managers/loot/LootManager.h generated by engine3 IDL compiler 0.60
 */

#ifndef LOOTMANAGER_H_
#define LOOTMANAGER_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

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
namespace player {

class PlayerCreature;

} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player;

namespace server {
namespace zone {
namespace managers {
namespace crafting {

class CraftingManager;

} // namespace crafting
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::crafting;

namespace server {
namespace zone {
namespace managers {
namespace loot {
namespace lootgroup {

class LootGroupObject;

} // namespace lootgroup
} // namespace loot
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::loot::lootgroup;

namespace server {
namespace zone {
namespace managers {
namespace loot {
namespace lootgroup {

class LootObject;

} // namespace lootgroup
} // namespace loot
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::loot::lootgroup;

#include "system/lang/ref/Reference.h"

#include "system/util/VectorMap.h"

#include "engine/lua/Lua.h"

#include "server/zone/managers/ZoneManager.h"

namespace server {
namespace zone {
namespace managers {
namespace loot {

class LootManager : public ZoneManager {
public:
	unsigned static const int FORAGEGENERAL = 4;

	unsigned static const int MEDICALFORAGEBASIC = 5;

	unsigned static const int MEDICALFORAGEADVANCED = 6;

	unsigned static const int MEDICALFORAGEEXCEPTIONAL = 7;

	unsigned static const int FORAGEBAIT = 8;

	unsigned static const int FORAGERARE = 9;

	unsigned static const int FISHING = 13;

	unsigned static const int FISHINGRARE = 14;

	LootManager(CraftingManager* craftman);

	void initialize();

	bool contains(unsigned int lootGroup);

	void createLoot(PlayerCreature* receiver, SceneObject* container, int level, unsigned int lootGroup, int objectCount = 0);

	void createLoot(PlayerCreature* receiver, SceneObject* container, int level, Vector<unsigned int>* lootGroup);

	void testLoot(PlayerCreature* receiver, SceneObject* container);

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	LootManager(DummyConstructorParameter* param);

	virtual ~LootManager();

	friend class LootManagerHelper;
};

} // namespace loot
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::loot;

namespace server {
namespace zone {
namespace managers {
namespace loot {

class LootManagerImplementation : public ZoneManagerImplementation {
	ManagedReference<CraftingManager* > craftingManager;

public:
	unsigned static const int FORAGEGENERAL = 4;

	unsigned static const int MEDICALFORAGEBASIC = 5;

	unsigned static const int MEDICALFORAGEADVANCED = 6;

	unsigned static const int MEDICALFORAGEEXCEPTIONAL = 7;

	unsigned static const int FORAGEBAIT = 8;

	unsigned static const int FORAGERARE = 9;

	unsigned static const int FISHING = 13;

	unsigned static const int FISHINGRARE = 14;

protected:
	VectorMap<unsigned int, ManagedReference<LootGroupObject* > > lootGroups;

public:
	LootManagerImplementation(CraftingManager* craftman);

	LootManagerImplementation(DummyConstructorParameter* param);

	void initialize();

protected:
	LootGroupObject* createLootGroup(unsigned int lootGroup);

public:
	bool contains(unsigned int lootGroup);

	void createLoot(PlayerCreature* receiver, SceneObject* container, int level, unsigned int lootGroup, int objectCount = 0);

	void createLoot(PlayerCreature* receiver, SceneObject* container, int level, Vector<unsigned int>* lootGroup);

protected:
	bool attachLoot(PlayerCreature* receiver, LootObject* loot, SceneObject* container, int objectCount = 0);

public:
	void testLoot(PlayerCreature* receiver, SceneObject* container);

	LootManager* _this;

	operator const LootManager*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~LootManagerImplementation();

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
	bool readObjectMember(ObjectInputStream* stream, const String& name);
	int writeObjectMembers(ObjectOutputStream* stream);

	friend class LootManager;
};

class LootManagerAdapter : public ZoneManagerAdapter {
public:
	LootManagerAdapter(LootManagerImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initialize();

	bool contains(unsigned int lootGroup);

	void createLoot(PlayerCreature* receiver, SceneObject* container, int level, unsigned int lootGroup, int objectCount);

	void testLoot(PlayerCreature* receiver, SceneObject* container);

};

class LootManagerHelper : public DistributedObjectClassHelper, public Singleton<LootManagerHelper> {
	static LootManagerHelper* staticInitializer;

public:
	LootManagerHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<LootManagerHelper>;
};

} // namespace loot
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::loot;

#endif /*LOOTMANAGER_H_*/
