/*
 *	server/zone/objects/tangible/wearables/WearableContainerObject.h generated by engine3 IDL compiler 0.60
 */

#ifndef WEARABLECONTAINEROBJECT_H_
#define WEARABLECONTAINEROBJECT_H_

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

#include "server/zone/objects/tangible/Container.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace wearables {

class WearableContainerObject : public Container {
public:
	WearableContainerObject();

	void addSkillMod(const int skillType, const String& skillMod, int value, bool notifyClient = true);

	void applySkillModsTo(CreatureObject* creature, bool doCheck = true);

	void removeSkillModsFrom(CreatureObject* creature);

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	WearableContainerObject(DummyConstructorParameter* param);

	virtual ~WearableContainerObject();

	friend class WearableContainerObjectHelper;
};

} // namespace wearables
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::wearables;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace wearables {

class WearableContainerObjectImplementation : public ContainerImplementation {
protected:
	VectorMap<String, int> wearableSkillMods;

public:
	WearableContainerObjectImplementation();

	WearableContainerObjectImplementation(DummyConstructorParameter* param);

	virtual void addSkillMod(const int skillType, const String& skillMod, int value, bool notifyClient = true);

	virtual void applySkillModsTo(CreatureObject* creature, bool doCheck = true);

	virtual void removeSkillModsFrom(CreatureObject* creature);

	WeakReference<WearableContainerObject*> _this;

	operator const WearableContainerObject*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~WearableContainerObjectImplementation();

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

	friend class WearableContainerObject;
};

class WearableContainerObjectAdapter : public ContainerAdapter {
public:
	WearableContainerObjectAdapter(WearableContainerObject* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void addSkillMod(const int skillType, const String& skillMod, int value, bool notifyClient);

	void applySkillModsTo(CreatureObject* creature, bool doCheck);

	void removeSkillModsFrom(CreatureObject* creature);

};

class WearableContainerObjectHelper : public DistributedObjectClassHelper, public Singleton<WearableContainerObjectHelper> {
	static WearableContainerObjectHelper* staticInitializer;

public:
	WearableContainerObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<WearableContainerObjectHelper>;
};

} // namespace wearables
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::wearables;

#endif /*WEARABLECONTAINEROBJECT_H_*/
