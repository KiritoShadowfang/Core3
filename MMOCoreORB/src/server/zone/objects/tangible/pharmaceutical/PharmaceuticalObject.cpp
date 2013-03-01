/*
 *	server/zone/objects/tangible/pharmaceutical/PharmaceuticalObject.cpp generated by engine3 IDL compiler 0.60
 */

#include "PharmaceuticalObject.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/Zone.h"

#include "server/zone/packets/scene/AttributeListMessage.h"

#include "server/zone/packets/object/ObjectMenuResponse.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/ZoneServer.h"

/*
 *	PharmaceuticalObjectStub
 */

enum {RPC_GETMEDICINEUSEREQUIRED__ = 6,RPC_GETRANGE__CREATUREOBJECT_,RPC_ISAREA__,RPC_GETAREA__,RPC_ISPHARMACEUTICALOBJECT__,RPC_ISSTIMPACK__,RPC_ISRANGEDSTIMPACK__,RPC_ISENHANCEPACK__,RPC_ISWOUNDPACK__,RPC_ISCUREPACK__,RPC_ISSTATEPACK__,RPC_ISREVIVEPACK__};

PharmaceuticalObject::PharmaceuticalObject() : TangibleObject(DummyConstructorParameter::instance()) {
	PharmaceuticalObjectImplementation* _implementation = new PharmaceuticalObjectImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("PharmaceuticalObject");
}

PharmaceuticalObject::PharmaceuticalObject(DummyConstructorParameter* param) : TangibleObject(param) {
	_setClassName("PharmaceuticalObject");
}

PharmaceuticalObject::~PharmaceuticalObject() {
}



int PharmaceuticalObject::getMedicineUseRequired() {
	PharmaceuticalObjectImplementation* _implementation = static_cast<PharmaceuticalObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETMEDICINEUSEREQUIRED__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getMedicineUseRequired();
}

float PharmaceuticalObject::getRange(CreatureObject* creature) {
	PharmaceuticalObjectImplementation* _implementation = static_cast<PharmaceuticalObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETRANGE__CREATUREOBJECT_);
		method.addObjectParameter(creature);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getRange(creature);
}

bool PharmaceuticalObject::isArea() {
	PharmaceuticalObjectImplementation* _implementation = static_cast<PharmaceuticalObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISAREA__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isArea();
}

float PharmaceuticalObject::getArea() {
	PharmaceuticalObjectImplementation* _implementation = static_cast<PharmaceuticalObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETAREA__);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getArea();
}

bool PharmaceuticalObject::isPharmaceuticalObject() {
	PharmaceuticalObjectImplementation* _implementation = static_cast<PharmaceuticalObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISPHARMACEUTICALOBJECT__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isPharmaceuticalObject();
}

bool PharmaceuticalObject::isStimPack() {
	PharmaceuticalObjectImplementation* _implementation = static_cast<PharmaceuticalObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISSTIMPACK__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isStimPack();
}

bool PharmaceuticalObject::isRangedStimPack() {
	PharmaceuticalObjectImplementation* _implementation = static_cast<PharmaceuticalObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISRANGEDSTIMPACK__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isRangedStimPack();
}

bool PharmaceuticalObject::isEnhancePack() {
	PharmaceuticalObjectImplementation* _implementation = static_cast<PharmaceuticalObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISENHANCEPACK__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isEnhancePack();
}

bool PharmaceuticalObject::isWoundPack() {
	PharmaceuticalObjectImplementation* _implementation = static_cast<PharmaceuticalObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISWOUNDPACK__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isWoundPack();
}

bool PharmaceuticalObject::isCurePack() {
	PharmaceuticalObjectImplementation* _implementation = static_cast<PharmaceuticalObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISCUREPACK__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isCurePack();
}

bool PharmaceuticalObject::isStatePack() {
	PharmaceuticalObjectImplementation* _implementation = static_cast<PharmaceuticalObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISSTATEPACK__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isStatePack();
}

bool PharmaceuticalObject::isRevivePack() {
	PharmaceuticalObjectImplementation* _implementation = static_cast<PharmaceuticalObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISREVIVEPACK__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isRevivePack();
}

DistributedObjectServant* PharmaceuticalObject::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* PharmaceuticalObject::_getImplementationForRead() {
	return _impl;
}

void PharmaceuticalObject::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	PharmaceuticalObjectImplementation
 */

PharmaceuticalObjectImplementation::PharmaceuticalObjectImplementation(DummyConstructorParameter* param) : TangibleObjectImplementation(param) {
	_initializeImplementation();
}


PharmaceuticalObjectImplementation::~PharmaceuticalObjectImplementation() {
}


void PharmaceuticalObjectImplementation::finalize() {
}

void PharmaceuticalObjectImplementation::_initializeImplementation() {
	_setClassHelper(PharmaceuticalObjectHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void PharmaceuticalObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<PharmaceuticalObject*>(stub);
	TangibleObjectImplementation::_setStub(stub);
}

DistributedObjectStub* PharmaceuticalObjectImplementation::_getStub() {
	return _this.get();
}

PharmaceuticalObjectImplementation::operator const PharmaceuticalObject*() {
	return _this.get();
}

void PharmaceuticalObjectImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void PharmaceuticalObjectImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void PharmaceuticalObjectImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void PharmaceuticalObjectImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void PharmaceuticalObjectImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void PharmaceuticalObjectImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void PharmaceuticalObjectImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void PharmaceuticalObjectImplementation::_serializationHelperMethod() {
	TangibleObjectImplementation::_serializationHelperMethod();

	_setClassName("PharmaceuticalObject");

}

void PharmaceuticalObjectImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(PharmaceuticalObjectImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool PharmaceuticalObjectImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (TangibleObjectImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0x274d1fc4: //PharmaceuticalObject.medicineUseRequired
		TypeInfo<int >::parseFromBinaryStream(&medicineUseRequired, stream);
		return true;

	}

	return false;
}

void PharmaceuticalObjectImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = PharmaceuticalObjectImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int PharmaceuticalObjectImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = TangibleObjectImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	_nameHashCode = 0x274d1fc4; //PharmaceuticalObject.medicineUseRequired
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&medicineUseRequired, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);


	return _count + 1;
}

PharmaceuticalObjectImplementation::PharmaceuticalObjectImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/pharmaceutical/PharmaceuticalObject.idl():  		setLoggingName("PharmaceuticalObject");
	setLoggingName("PharmaceuticalObject");
	// server/zone/objects/tangible/pharmaceutical/PharmaceuticalObject.idl():  		medicineUseRequired = 0;
	medicineUseRequired = 0;
}

int PharmaceuticalObjectImplementation::getMedicineUseRequired() {
	// server/zone/objects/tangible/pharmaceutical/PharmaceuticalObject.idl():  		return medicineUseRequired;
	return medicineUseRequired;
}

float PharmaceuticalObjectImplementation::getRange(CreatureObject* creature) {
	// server/zone/objects/tangible/pharmaceutical/PharmaceuticalObject.idl():  		return 5;
	return 5;
}

bool PharmaceuticalObjectImplementation::isArea() {
	// server/zone/objects/tangible/pharmaceutical/PharmaceuticalObject.idl():  		return false;
	return false;
}

float PharmaceuticalObjectImplementation::getArea() {
	// server/zone/objects/tangible/pharmaceutical/PharmaceuticalObject.idl():  		return 0;
	return 0;
}

bool PharmaceuticalObjectImplementation::isPharmaceuticalObject() {
	// server/zone/objects/tangible/pharmaceutical/PharmaceuticalObject.idl():  		return true;
	return true;
}

bool PharmaceuticalObjectImplementation::isStimPack() {
	// server/zone/objects/tangible/pharmaceutical/PharmaceuticalObject.idl():  		return false;
	return false;
}

bool PharmaceuticalObjectImplementation::isRangedStimPack() {
	// server/zone/objects/tangible/pharmaceutical/PharmaceuticalObject.idl():  		return false;
	return false;
}

bool PharmaceuticalObjectImplementation::isEnhancePack() {
	// server/zone/objects/tangible/pharmaceutical/PharmaceuticalObject.idl():  		return false;
	return false;
}

bool PharmaceuticalObjectImplementation::isWoundPack() {
	// server/zone/objects/tangible/pharmaceutical/PharmaceuticalObject.idl():  		return false;
	return false;
}

bool PharmaceuticalObjectImplementation::isCurePack() {
	// server/zone/objects/tangible/pharmaceutical/PharmaceuticalObject.idl():  		return false;
	return false;
}

bool PharmaceuticalObjectImplementation::isStatePack() {
	// server/zone/objects/tangible/pharmaceutical/PharmaceuticalObject.idl():  		return false;
	return false;
}

bool PharmaceuticalObjectImplementation::isRevivePack() {
	// server/zone/objects/tangible/pharmaceutical/PharmaceuticalObject.idl():  		return false;
	return false;
}

/*
 *	PharmaceuticalObjectAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


PharmaceuticalObjectAdapter::PharmaceuticalObjectAdapter(PharmaceuticalObject* obj) : TangibleObjectAdapter(obj) {
}

void PharmaceuticalObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_GETMEDICINEUSEREQUIRED__:
		{
			resp->insertSignedInt(getMedicineUseRequired());
		}
		break;
	case RPC_GETRANGE__CREATUREOBJECT_:
		{
			resp->insertFloat(getRange(static_cast<CreatureObject*>(inv->getObjectParameter())));
		}
		break;
	case RPC_ISAREA__:
		{
			resp->insertBoolean(isArea());
		}
		break;
	case RPC_GETAREA__:
		{
			resp->insertFloat(getArea());
		}
		break;
	case RPC_ISPHARMACEUTICALOBJECT__:
		{
			resp->insertBoolean(isPharmaceuticalObject());
		}
		break;
	case RPC_ISSTIMPACK__:
		{
			resp->insertBoolean(isStimPack());
		}
		break;
	case RPC_ISRANGEDSTIMPACK__:
		{
			resp->insertBoolean(isRangedStimPack());
		}
		break;
	case RPC_ISENHANCEPACK__:
		{
			resp->insertBoolean(isEnhancePack());
		}
		break;
	case RPC_ISWOUNDPACK__:
		{
			resp->insertBoolean(isWoundPack());
		}
		break;
	case RPC_ISCUREPACK__:
		{
			resp->insertBoolean(isCurePack());
		}
		break;
	case RPC_ISSTATEPACK__:
		{
			resp->insertBoolean(isStatePack());
		}
		break;
	case RPC_ISREVIVEPACK__:
		{
			resp->insertBoolean(isRevivePack());
		}
		break;
	default:
		throw Exception("Method does not exists");
	}
}

int PharmaceuticalObjectAdapter::getMedicineUseRequired() {
	return (static_cast<PharmaceuticalObject*>(stub))->getMedicineUseRequired();
}

float PharmaceuticalObjectAdapter::getRange(CreatureObject* creature) {
	return (static_cast<PharmaceuticalObject*>(stub))->getRange(creature);
}

bool PharmaceuticalObjectAdapter::isArea() {
	return (static_cast<PharmaceuticalObject*>(stub))->isArea();
}

float PharmaceuticalObjectAdapter::getArea() {
	return (static_cast<PharmaceuticalObject*>(stub))->getArea();
}

bool PharmaceuticalObjectAdapter::isPharmaceuticalObject() {
	return (static_cast<PharmaceuticalObject*>(stub))->isPharmaceuticalObject();
}

bool PharmaceuticalObjectAdapter::isStimPack() {
	return (static_cast<PharmaceuticalObject*>(stub))->isStimPack();
}

bool PharmaceuticalObjectAdapter::isRangedStimPack() {
	return (static_cast<PharmaceuticalObject*>(stub))->isRangedStimPack();
}

bool PharmaceuticalObjectAdapter::isEnhancePack() {
	return (static_cast<PharmaceuticalObject*>(stub))->isEnhancePack();
}

bool PharmaceuticalObjectAdapter::isWoundPack() {
	return (static_cast<PharmaceuticalObject*>(stub))->isWoundPack();
}

bool PharmaceuticalObjectAdapter::isCurePack() {
	return (static_cast<PharmaceuticalObject*>(stub))->isCurePack();
}

bool PharmaceuticalObjectAdapter::isStatePack() {
	return (static_cast<PharmaceuticalObject*>(stub))->isStatePack();
}

bool PharmaceuticalObjectAdapter::isRevivePack() {
	return (static_cast<PharmaceuticalObject*>(stub))->isRevivePack();
}

/*
 *	PharmaceuticalObjectHelper
 */

PharmaceuticalObjectHelper* PharmaceuticalObjectHelper::staticInitializer = PharmaceuticalObjectHelper::instance();

PharmaceuticalObjectHelper::PharmaceuticalObjectHelper() {
	className = "PharmaceuticalObject";

	Core::getObjectBroker()->registerClass(className, this);
}

void PharmaceuticalObjectHelper::finalizeHelper() {
	PharmaceuticalObjectHelper::finalize();
}

DistributedObject* PharmaceuticalObjectHelper::instantiateObject() {
	return new PharmaceuticalObject(DummyConstructorParameter::instance());
}

DistributedObjectServant* PharmaceuticalObjectHelper::instantiateServant() {
	return new PharmaceuticalObjectImplementation();
}

DistributedObjectAdapter* PharmaceuticalObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new PharmaceuticalObjectAdapter(static_cast<PharmaceuticalObject*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

