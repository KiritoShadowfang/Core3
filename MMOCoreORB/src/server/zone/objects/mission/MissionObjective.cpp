/*
 *	server/zone/objects/mission/MissionObjective.cpp generated by engine3 IDL compiler 0.60
 */

#include "MissionObjective.h"

#include "server/zone/objects/mission/MissionObject.h"

#include "server/zone/objects/mission/MissionObserver.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/mission/events/FailMissionAfterCertainTimeTask.h"

/*
 *	MissionObjectiveStub
 */

enum {RPC_INITIALIZETRANSIENTMEMBERS__ = 6,RPC_DESTROYOBJECTFROMDATABASE__,RPC_NOTIFYOBSERVEREVENT__MISSIONOBSERVER_INT_OBSERVABLE_MANAGEDOBJECT_LONG_,RPC_ADDOBSERVER__MISSIONOBSERVER_BOOL_,RPC_DROPOBSERVER__MISSIONOBSERVER_BOOL_,RPC_GETOBSERVERCOUNT__,RPC_REMOVEALLOBSERVERS__,RPC_GETOBSERVER__INT_,RPC_HASOBSERVERS__,RPC_ACTIVATE__,RPC_DEACTIVATE__,RPC_ABORT__,RPC_COMPLETE__,RPC_FAIL__,RPC_GETMISSIONOBJECT__,RPC_GETOBJECTIVETYPE__,RPC_GETPLAYEROWNER__,RPC_AWARDFACTIONPOINTS__,RPC_REMOVEMISSIONFROMPLAYER__,RPC_AWARDREWARD__,};

MissionObjective::MissionObjective(MissionObject* parent) : ManagedObject(DummyConstructorParameter::instance()) {
	MissionObjectiveImplementation* _implementation = new MissionObjectiveImplementation(parent);
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("MissionObjective");
}

MissionObjective::MissionObjective(DummyConstructorParameter* param) : ManagedObject(param) {
	_setClassName("MissionObjective");
}

MissionObjective::~MissionObjective() {
}



void MissionObjective::initializeTransientMembers() {
	MissionObjectiveImplementation* _implementation = static_cast<MissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

void MissionObjective::destroyObjectFromDatabase() {
	MissionObjectiveImplementation* _implementation = static_cast<MissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_DESTROYOBJECTFROMDATABASE__);

		method.executeWithVoidReturn();
	} else
		_implementation->destroyObjectFromDatabase();
}

int MissionObjective::notifyObserverEvent(MissionObserver* observer, unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2) {
	MissionObjectiveImplementation* _implementation = static_cast<MissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_NOTIFYOBSERVEREVENT__MISSIONOBSERVER_INT_OBSERVABLE_MANAGEDOBJECT_LONG_);
		method.addObjectParameter(observer);
		method.addUnsignedIntParameter(eventType);
		method.addObjectParameter(observable);
		method.addObjectParameter(arg1);
		method.addSignedLongParameter(arg2);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->notifyObserverEvent(observer, eventType, observable, arg1, arg2);
}

void MissionObjective::addObserver(MissionObserver* observer, bool makePersistent) {
	MissionObjectiveImplementation* _implementation = static_cast<MissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ADDOBSERVER__MISSIONOBSERVER_BOOL_);
		method.addObjectParameter(observer);
		method.addBooleanParameter(makePersistent);

		method.executeWithVoidReturn();
	} else
		_implementation->addObserver(observer, makePersistent);
}

void MissionObjective::dropObserver(MissionObserver* observer, bool removeFromDatabase) {
	MissionObjectiveImplementation* _implementation = static_cast<MissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_DROPOBSERVER__MISSIONOBSERVER_BOOL_);
		method.addObjectParameter(observer);
		method.addBooleanParameter(removeFromDatabase);

		method.executeWithVoidReturn();
	} else
		_implementation->dropObserver(observer, removeFromDatabase);
}

int MissionObjective::getObserverCount() {
	MissionObjectiveImplementation* _implementation = static_cast<MissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETOBSERVERCOUNT__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getObserverCount();
}

void MissionObjective::removeAllObservers() {
	MissionObjectiveImplementation* _implementation = static_cast<MissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_REMOVEALLOBSERVERS__);

		method.executeWithVoidReturn();
	} else
		_implementation->removeAllObservers();
}

MissionObserver* MissionObjective::getObserver(int index) {
	MissionObjectiveImplementation* _implementation = static_cast<MissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETOBSERVER__INT_);
		method.addSignedIntParameter(index);

		return static_cast<MissionObserver*>(method.executeWithObjectReturn());
	} else
		return _implementation->getObserver(index);
}

bool MissionObjective::hasObservers() {
	MissionObjectiveImplementation* _implementation = static_cast<MissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_HASOBSERVERS__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->hasObservers();
}

void MissionObjective::activate() {
	MissionObjectiveImplementation* _implementation = static_cast<MissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ACTIVATE__);

		method.executeWithVoidReturn();
	} else
		_implementation->activate();
}

void MissionObjective::deactivate() {
	MissionObjectiveImplementation* _implementation = static_cast<MissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_DEACTIVATE__);

		method.executeWithVoidReturn();
	} else
		_implementation->deactivate();
}

void MissionObjective::abort() {
	MissionObjectiveImplementation* _implementation = static_cast<MissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ABORT__);

		method.executeWithVoidReturn();
	} else
		_implementation->abort();
}

void MissionObjective::complete() {
	MissionObjectiveImplementation* _implementation = static_cast<MissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_COMPLETE__);

		method.executeWithVoidReturn();
	} else
		_implementation->complete();
}

void MissionObjective::fail() {
	MissionObjectiveImplementation* _implementation = static_cast<MissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_FAIL__);

		method.executeWithVoidReturn();
	} else
		_implementation->fail();
}

ManagedWeakReference<MissionObject* > MissionObjective::getMissionObject() {
	MissionObjectiveImplementation* _implementation = static_cast<MissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETMISSIONOBJECT__);

		return static_cast<MissionObject*>(method.executeWithObjectReturn());
	} else
		return _implementation->getMissionObject();
}

unsigned int MissionObjective::getObjectiveType() {
	MissionObjectiveImplementation* _implementation = static_cast<MissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETOBJECTIVETYPE__);

		return method.executeWithUnsignedIntReturn();
	} else
		return _implementation->getObjectiveType();
}

ManagedWeakReference<CreatureObject* > MissionObjective::getPlayerOwner() {
	MissionObjectiveImplementation* _implementation = static_cast<MissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETPLAYEROWNER__);

		return static_cast<CreatureObject*>(method.executeWithObjectReturn());
	} else
		return _implementation->getPlayerOwner();
}

void MissionObjective::awardFactionPoints() {
	MissionObjectiveImplementation* _implementation = static_cast<MissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_AWARDFACTIONPOINTS__);

		method.executeWithVoidReturn();
	} else
		_implementation->awardFactionPoints();
}

void MissionObjective::removeMissionFromPlayer() {
	MissionObjectiveImplementation* _implementation = static_cast<MissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_REMOVEMISSIONFROMPLAYER__);

		method.executeWithVoidReturn();
	} else
		_implementation->removeMissionFromPlayer();
}

void MissionObjective::awardReward() {
	MissionObjectiveImplementation* _implementation = static_cast<MissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_AWARDREWARD__);

		method.executeWithVoidReturn();
	} else
		_implementation->awardReward();
}

Vector3 MissionObjective::getEndPosition() {
	MissionObjectiveImplementation* _implementation = static_cast<MissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getEndPosition();
}

DistributedObjectServant* MissionObjective::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* MissionObjective::_getImplementationForRead() {
	return _impl;
}

void MissionObjective::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	MissionObjectiveImplementation
 */

MissionObjectiveImplementation::MissionObjectiveImplementation(DummyConstructorParameter* param) : ManagedObjectImplementation(param) {
	_initializeImplementation();
}


MissionObjectiveImplementation::~MissionObjectiveImplementation() {
}


void MissionObjectiveImplementation::finalize() {
}

void MissionObjectiveImplementation::_initializeImplementation() {
	_setClassHelper(MissionObjectiveHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void MissionObjectiveImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<MissionObjective*>(stub);
	ManagedObjectImplementation::_setStub(stub);
}

DistributedObjectStub* MissionObjectiveImplementation::_getStub() {
	return _this.get();
}

MissionObjectiveImplementation::operator const MissionObjective*() {
	return _this.get();
}

void MissionObjectiveImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void MissionObjectiveImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void MissionObjectiveImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void MissionObjectiveImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void MissionObjectiveImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void MissionObjectiveImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void MissionObjectiveImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void MissionObjectiveImplementation::_serializationHelperMethod() {
	ManagedObjectImplementation::_serializationHelperMethod();

	_setClassName("MissionObjective");

}

void MissionObjectiveImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(MissionObjectiveImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool MissionObjectiveImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (ManagedObjectImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0x44338d23: //MissionObjective.observers
		TypeInfo<SortedVector<ManagedReference<MissionObserver* > > >::parseFromBinaryStream(&observers, stream);
		return true;

	case 0xc4598e9: //MissionObjective.mission
		TypeInfo<ManagedWeakReference<MissionObject* > >::parseFromBinaryStream(&mission, stream);
		return true;

	case 0xb6ca065b: //MissionObjective.objectiveType
		TypeInfo<unsigned int >::parseFromBinaryStream(&objectiveType, stream);
		return true;

	case 0xc9c97c10: //MissionObjective.missionStartTime
		TypeInfo<Time >::parseFromBinaryStream(&missionStartTime, stream);
		return true;

	case 0x2eeef7b2: //MissionObjective.failTask
		TypeInfo<Reference<FailMissionAfterCertainTimeTask* > >::parseFromBinaryStream(&failTask, stream);
		return true;

	case 0x444331b: //MissionObjective.timeRemaining
		TypeInfo<unsigned long long >::parseFromBinaryStream(&timeRemaining, stream);
		return true;

	}

	return false;
}

void MissionObjectiveImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = MissionObjectiveImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int MissionObjectiveImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = ManagedObjectImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	_nameHashCode = 0x44338d23; //MissionObjective.observers
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<SortedVector<ManagedReference<MissionObserver* > > >::toBinaryStream(&observers, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0xc4598e9; //MissionObjective.mission
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedWeakReference<MissionObject* > >::toBinaryStream(&mission, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0xb6ca065b; //MissionObjective.objectiveType
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<unsigned int >::toBinaryStream(&objectiveType, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0xc9c97c10; //MissionObjective.missionStartTime
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<Time >::toBinaryStream(&missionStartTime, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0x2eeef7b2; //MissionObjective.failTask
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<Reference<FailMissionAfterCertainTimeTask* > >::toBinaryStream(&failTask, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0x444331b; //MissionObjective.timeRemaining
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<unsigned long long >::toBinaryStream(&timeRemaining, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);


	return _count + 6;
}

MissionObjectiveImplementation::MissionObjectiveImplementation(MissionObject* parent) {
	_initializeImplementation();
	// server/zone/objects/mission/MissionObjective.idl():  		mission = parent;
	mission = parent;
	// server/zone/objects/mission/MissionObjective.idl():  		Logger.setLoggingName("MissionObjective");
	Logger::setLoggingName("MissionObjective");
	// server/zone/objects/mission/MissionObjective.idl():  		timeRemaining = 48 * 60 * 60 * 1000;
	timeRemaining = 48 * 60 * 60 * 1000;
	// server/zone/objects/mission/MissionObjective.idl():  		activated = false;
	activated = false;
	// server/zone/objects/mission/MissionObjective.idl():  		missionStartTime.updateToCurrentTime();
	(&missionStartTime)->updateToCurrentTime();
}

void MissionObjectiveImplementation::initializeTransientMembers() {
	// server/zone/objects/mission/MissionObjective.idl():  		activated = false;
	activated = false;
}

int MissionObjectiveImplementation::notifyObserverEvent(MissionObserver* observer, unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2) {
	// server/zone/objects/mission/MissionObjective.idl():  		return 1;
	return 1;
}

void MissionObjectiveImplementation::dropObserver(MissionObserver* observer, bool removeFromDatabase) {
	// server/zone/objects/mission/MissionObjective.idl():  		observers.
	if (removeFromDatabase)	// server/zone/objects/mission/MissionObjective.idl():  			observer.destroyObjectFromDatabase();
	observer->destroyObjectFromDatabase();
	// server/zone/objects/mission/MissionObjective.idl():  		observers.drop(observer);
	(&observers)->drop(observer);
}

int MissionObjectiveImplementation::getObserverCount() {
	// server/zone/objects/mission/MissionObjective.idl():  		return observers.size();
	return (&observers)->size();
}

void MissionObjectiveImplementation::removeAllObservers() {
	// server/zone/objects/mission/MissionObjective.idl():  		observers.removeAll();
	(&observers)->removeAll();
}

MissionObserver* MissionObjectiveImplementation::getObserver(int index) {
	// server/zone/objects/mission/MissionObjective.idl():  		return observers.get(index);
	return (&observers)->get(index);
}

bool MissionObjectiveImplementation::hasObservers() {
	// server/zone/objects/mission/MissionObjective.idl():  		return observers.size() != 0;
	return (&observers)->size() != 0;
}

void MissionObjectiveImplementation::deactivate() {
	// server/zone/objects/mission/MissionObjective.idl():  		activated = false;
	activated = false;
}

ManagedWeakReference<MissionObject* > MissionObjectiveImplementation::getMissionObject() {
	// server/zone/objects/mission/MissionObjective.idl():  		return mission;
	return mission;
}

unsigned int MissionObjectiveImplementation::getObjectiveType() {
	// server/zone/objects/mission/MissionObjective.idl():  		return objectiveType;
	return objectiveType;
}

/*
 *	MissionObjectiveAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


MissionObjectiveAdapter::MissionObjectiveAdapter(MissionObjective* obj) : ManagedObjectAdapter(obj) {
}

void MissionObjectiveAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		{
			initializeTransientMembers();
		}
		break;
	case RPC_DESTROYOBJECTFROMDATABASE__:
		{
			destroyObjectFromDatabase();
		}
		break;
	case RPC_NOTIFYOBSERVEREVENT__MISSIONOBSERVER_INT_OBSERVABLE_MANAGEDOBJECT_LONG_:
		{
			resp->insertSignedInt(notifyObserverEvent(static_cast<MissionObserver*>(inv->getObjectParameter()), inv->getUnsignedIntParameter(), static_cast<Observable*>(inv->getObjectParameter()), static_cast<ManagedObject*>(inv->getObjectParameter()), inv->getSignedLongParameter()));
		}
		break;
	case RPC_ADDOBSERVER__MISSIONOBSERVER_BOOL_:
		{
			addObserver(static_cast<MissionObserver*>(inv->getObjectParameter()), inv->getBooleanParameter());
		}
		break;
	case RPC_DROPOBSERVER__MISSIONOBSERVER_BOOL_:
		{
			dropObserver(static_cast<MissionObserver*>(inv->getObjectParameter()), inv->getBooleanParameter());
		}
		break;
	case RPC_GETOBSERVERCOUNT__:
		{
			resp->insertSignedInt(getObserverCount());
		}
		break;
	case RPC_REMOVEALLOBSERVERS__:
		{
			removeAllObservers();
		}
		break;
	case RPC_GETOBSERVER__INT_:
		{
			resp->insertLong(getObserver(inv->getSignedIntParameter())->_getObjectID());
		}
		break;
	case RPC_HASOBSERVERS__:
		{
			resp->insertBoolean(hasObservers());
		}
		break;
	case RPC_ACTIVATE__:
		{
			activate();
		}
		break;
	case RPC_DEACTIVATE__:
		{
			deactivate();
		}
		break;
	case RPC_ABORT__:
		{
			abort();
		}
		break;
	case RPC_COMPLETE__:
		{
			complete();
		}
		break;
	case RPC_FAIL__:
		{
			fail();
		}
		break;
	case RPC_GETMISSIONOBJECT__:
		{
			resp->insertLong(getMissionObject().get()->_getObjectID());
		}
		break;
	case RPC_GETOBJECTIVETYPE__:
		{
			resp->insertInt(getObjectiveType());
		}
		break;
	case RPC_GETPLAYEROWNER__:
		{
			resp->insertLong(getPlayerOwner().get()->_getObjectID());
		}
		break;
	case RPC_AWARDFACTIONPOINTS__:
		{
			awardFactionPoints();
		}
		break;
	case RPC_REMOVEMISSIONFROMPLAYER__:
		{
			removeMissionFromPlayer();
		}
		break;
	case RPC_AWARDREWARD__:
		{
			awardReward();
		}
		break;
	default:
		throw Exception("Method does not exists");
	}
}

void MissionObjectiveAdapter::initializeTransientMembers() {
	(static_cast<MissionObjective*>(stub))->initializeTransientMembers();
}

void MissionObjectiveAdapter::destroyObjectFromDatabase() {
	(static_cast<MissionObjective*>(stub))->destroyObjectFromDatabase();
}

int MissionObjectiveAdapter::notifyObserverEvent(MissionObserver* observer, unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2) {
	return (static_cast<MissionObjective*>(stub))->notifyObserverEvent(observer, eventType, observable, arg1, arg2);
}

void MissionObjectiveAdapter::addObserver(MissionObserver* observer, bool makePersistent) {
	(static_cast<MissionObjective*>(stub))->addObserver(observer, makePersistent);
}

void MissionObjectiveAdapter::dropObserver(MissionObserver* observer, bool removeFromDatabase) {
	(static_cast<MissionObjective*>(stub))->dropObserver(observer, removeFromDatabase);
}

int MissionObjectiveAdapter::getObserverCount() {
	return (static_cast<MissionObjective*>(stub))->getObserverCount();
}

void MissionObjectiveAdapter::removeAllObservers() {
	(static_cast<MissionObjective*>(stub))->removeAllObservers();
}

MissionObserver* MissionObjectiveAdapter::getObserver(int index) {
	return (static_cast<MissionObjective*>(stub))->getObserver(index);
}

bool MissionObjectiveAdapter::hasObservers() {
	return (static_cast<MissionObjective*>(stub))->hasObservers();
}

void MissionObjectiveAdapter::activate() {
	(static_cast<MissionObjective*>(stub))->activate();
}

void MissionObjectiveAdapter::deactivate() {
	(static_cast<MissionObjective*>(stub))->deactivate();
}

void MissionObjectiveAdapter::abort() {
	(static_cast<MissionObjective*>(stub))->abort();
}

void MissionObjectiveAdapter::complete() {
	(static_cast<MissionObjective*>(stub))->complete();
}

void MissionObjectiveAdapter::fail() {
	(static_cast<MissionObjective*>(stub))->fail();
}

ManagedWeakReference<MissionObject* > MissionObjectiveAdapter::getMissionObject() {
	return (static_cast<MissionObjective*>(stub))->getMissionObject();
}

unsigned int MissionObjectiveAdapter::getObjectiveType() {
	return (static_cast<MissionObjective*>(stub))->getObjectiveType();
}

ManagedWeakReference<CreatureObject* > MissionObjectiveAdapter::getPlayerOwner() {
	return (static_cast<MissionObjective*>(stub))->getPlayerOwner();
}

void MissionObjectiveAdapter::awardFactionPoints() {
	(static_cast<MissionObjective*>(stub))->awardFactionPoints();
}

void MissionObjectiveAdapter::removeMissionFromPlayer() {
	(static_cast<MissionObjective*>(stub))->removeMissionFromPlayer();
}

void MissionObjectiveAdapter::awardReward() {
	(static_cast<MissionObjective*>(stub))->awardReward();
}

/*
 *	MissionObjectiveHelper
 */

MissionObjectiveHelper* MissionObjectiveHelper::staticInitializer = MissionObjectiveHelper::instance();

MissionObjectiveHelper::MissionObjectiveHelper() {
	className = "MissionObjective";

	Core::getObjectBroker()->registerClass(className, this);
}

void MissionObjectiveHelper::finalizeHelper() {
	MissionObjectiveHelper::finalize();
}

DistributedObject* MissionObjectiveHelper::instantiateObject() {
	return new MissionObjective(DummyConstructorParameter::instance());
}

DistributedObjectServant* MissionObjectiveHelper::instantiateServant() {
	return new MissionObjectiveImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* MissionObjectiveHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new MissionObjectiveAdapter(static_cast<MissionObjective*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

