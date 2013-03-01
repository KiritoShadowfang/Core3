/*
 *	server/zone/objects/player/sessions/DestroyStructureSession.h generated by engine3 IDL compiler 0.60
 */

#ifndef DESTROYSTRUCTURESESSION_H_
#define DESTROYSTRUCTURESESSION_H_

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
namespace structure {

class StructureObject;

} // namespace structure
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::structure;

#include "server/zone/objects/scene/SessionFacadeType.h"

#include "engine/util/Facade.h"

namespace server {
namespace zone {
namespace objects {
namespace player {
namespace sessions {

class DestroyStructureSession : public Facade {
public:
	DestroyStructureSession(CreatureObject* creature, StructureObject* structure);

	bool isDestroyCode(unsigned int code);

	int initializeSession();

	int sendDestroyCode();

	int destroyStructure();

	int cancelSession();

	int clearSession();

	StructureObject* getStructureObject();

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	DestroyStructureSession(DummyConstructorParameter* param);

	virtual ~DestroyStructureSession();

	friend class DestroyStructureSessionHelper;
};

} // namespace sessions
} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player::sessions;

namespace server {
namespace zone {
namespace objects {
namespace player {
namespace sessions {

class DestroyStructureSessionImplementation : public FacadeImplementation {
protected:
	ManagedReference<CreatureObject* > creatureObject;

	ManagedReference<StructureObject* > structureObject;

	unsigned int destroyCode;

public:
	DestroyStructureSessionImplementation(CreatureObject* creature, StructureObject* structure);

	DestroyStructureSessionImplementation(DummyConstructorParameter* param);

	bool isDestroyCode(unsigned int code);

	int initializeSession();

	int sendDestroyCode();

	int destroyStructure();

	int cancelSession();

	int clearSession();

	StructureObject* getStructureObject();

	WeakReference<DestroyStructureSession*> _this;

	operator const DestroyStructureSession*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~DestroyStructureSessionImplementation();

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

	friend class DestroyStructureSession;
};

class DestroyStructureSessionAdapter : public FacadeAdapter {
public:
	DestroyStructureSessionAdapter(DestroyStructureSession* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	bool isDestroyCode(unsigned int code);

	int initializeSession();

	int sendDestroyCode();

	int destroyStructure();

	int cancelSession();

	int clearSession();

	StructureObject* getStructureObject();

};

class DestroyStructureSessionHelper : public DistributedObjectClassHelper, public Singleton<DestroyStructureSessionHelper> {
	static DestroyStructureSessionHelper* staticInitializer;

public:
	DestroyStructureSessionHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<DestroyStructureSessionHelper>;
};

} // namespace sessions
} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player::sessions;

#endif /*DESTROYSTRUCTURESESSION_H_*/
