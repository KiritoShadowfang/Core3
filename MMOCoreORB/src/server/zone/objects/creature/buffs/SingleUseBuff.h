/*
 *	server/zone/objects/creature/buffs/SingleUseBuff.h generated by engine3 IDL compiler 0.60
 */

#ifndef SINGLEUSEBUFF_H_
#define SINGLEUSEBUFF_H_

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
namespace objects {
namespace creature {
namespace buffs {

class BuffDurationEvent;

} // namespace buffs
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::buffs;

namespace server {
namespace zone {
namespace objects {
namespace creature {
namespace buffs {

class SingleUseBuffObserver;

} // namespace buffs
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::buffs;

#include "server/zone/ZoneProcessServer.h"

#include "server/zone/objects/creature/buffs/BuffType.h"

#include "server/zone/managers/object/ObjectManager.h"

#include "engine/core/ManagedObject.h"

#include "system/util/Vector.h"

#include "system/lang/ref/Reference.h"

#include "server/zone/objects/creature/buffs/Buff.h"

namespace server {
namespace zone {
namespace objects {
namespace creature {
namespace buffs {

class SingleUseBuff : public Buff {
public:
	SingleUseBuff(CreatureObject* creo, unsigned int buffcrc, float duration, int bufftype, unsigned int comCRC);

	void init(Vector<unsigned int>* events);

	unsigned int getCommandCRC();

	CreatureObject* getPlayer();

	void activate();

	void deactivate();

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	SingleUseBuff(DummyConstructorParameter* param);

	virtual ~SingleUseBuff();

	friend class SingleUseBuffHelper;
};

} // namespace buffs
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::buffs;

namespace server {
namespace zone {
namespace objects {
namespace creature {
namespace buffs {

class SingleUseBuffImplementation : public BuffImplementation {
protected:
	ManagedReference<SingleUseBuffObserver* > observer;

	ManagedReference<CreatureObject* > player;

	unsigned int commandCRC;

	Vector<unsigned int> eventTypes;

public:
	SingleUseBuffImplementation(CreatureObject* creo, unsigned int buffcrc, float duration, int bufftype, unsigned int comCRC);

	SingleUseBuffImplementation(DummyConstructorParameter* param);

	void init(Vector<unsigned int>* events);

	unsigned int getCommandCRC();

	CreatureObject* getPlayer();

	void activate();

	void deactivate();

private:
	void addObservers();

	void dropObservers();

public:
	WeakReference<SingleUseBuff*> _this;

	operator const SingleUseBuff*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~SingleUseBuffImplementation();

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

	friend class SingleUseBuff;
};

class SingleUseBuffAdapter : public BuffAdapter {
public:
	SingleUseBuffAdapter(SingleUseBuff* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	unsigned int getCommandCRC();

	CreatureObject* getPlayer();

	void activate();

	void deactivate();

};

class SingleUseBuffHelper : public DistributedObjectClassHelper, public Singleton<SingleUseBuffHelper> {
	static SingleUseBuffHelper* staticInitializer;

public:
	SingleUseBuffHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<SingleUseBuffHelper>;
};

} // namespace buffs
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::buffs;

#endif /*SINGLEUSEBUFF_H_*/
