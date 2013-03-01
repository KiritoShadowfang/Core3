/*
 *	server/zone/objects/tangible/consumable/Food.cpp generated by engine3 IDL compiler 0.60
 */

#include "Food.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/Zone.h"

/*
 *	FoodStub
 */

enum {RPC_INITIALIZETRANSIENTMEMBERS__ = 6,RPC_INITIALIZEPRIVATEDATA__};

Food::Food() : Consumable(DummyConstructorParameter::instance()) {
	FoodImplementation* _implementation = new FoodImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("Food");
}

Food::Food(DummyConstructorParameter* param) : Consumable(param) {
	_setClassName("Food");
}

Food::~Food() {
}



void Food::initializeTransientMembers() {
	FoodImplementation* _implementation = static_cast<FoodImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

void Food::initializePrivateData() {
	FoodImplementation* _implementation = static_cast<FoodImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZEPRIVATEDATA__);

		method.executeWithVoidReturn();
	} else
		_implementation->initializePrivateData();
}

DistributedObjectServant* Food::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* Food::_getImplementationForRead() {
	return _impl;
}

void Food::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	FoodImplementation
 */

FoodImplementation::FoodImplementation(DummyConstructorParameter* param) : ConsumableImplementation(param) {
	_initializeImplementation();
}


FoodImplementation::~FoodImplementation() {
}


void FoodImplementation::finalize() {
}

void FoodImplementation::_initializeImplementation() {
	_setClassHelper(FoodHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void FoodImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<Food*>(stub);
	ConsumableImplementation::_setStub(stub);
}

DistributedObjectStub* FoodImplementation::_getStub() {
	return _this.get();
}

FoodImplementation::operator const Food*() {
	return _this.get();
}

void FoodImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void FoodImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void FoodImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void FoodImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void FoodImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void FoodImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void FoodImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void FoodImplementation::_serializationHelperMethod() {
	ConsumableImplementation::_serializationHelperMethod();

	_setClassName("Food");

}

void FoodImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(FoodImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool FoodImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (ConsumableImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	}

	return false;
}

void FoodImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = FoodImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int FoodImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = ConsumableImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;

	return _count + 0;
}

FoodImplementation::FoodImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/consumable/Food.idl():  		Logger.setLoggingName("Food");
	Logger::setLoggingName("Food");
	// server/zone/objects/tangible/consumable/Food.idl():  		initializePrivateData();
	initializePrivateData();
}

void FoodImplementation::initializeTransientMembers() {
	// server/zone/objects/tangible/consumable/Food.idl():  		super.initializeTransientMembers();
	ConsumableImplementation::initializeTransientMembers();
	// server/zone/objects/tangible/consumable/Food.idl():  		Logger.setLoggingName("Food");
	Logger::setLoggingName("Food");
}

void FoodImplementation::initializePrivateData() {
	// server/zone/objects/tangible/consumable/Food.idl():  		super.consumableType = super.FOOD;
	ConsumableImplementation::consumableType = ConsumableImplementation::FOOD;
}

/*
 *	FoodAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


FoodAdapter::FoodAdapter(Food* obj) : ConsumableAdapter(obj) {
}

void FoodAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		{
			initializeTransientMembers();
		}
		break;
	case RPC_INITIALIZEPRIVATEDATA__:
		{
			initializePrivateData();
		}
		break;
	default:
		throw Exception("Method does not exists");
	}
}

void FoodAdapter::initializeTransientMembers() {
	(static_cast<Food*>(stub))->initializeTransientMembers();
}

void FoodAdapter::initializePrivateData() {
	(static_cast<Food*>(stub))->initializePrivateData();
}

/*
 *	FoodHelper
 */

FoodHelper* FoodHelper::staticInitializer = FoodHelper::instance();

FoodHelper::FoodHelper() {
	className = "Food";

	Core::getObjectBroker()->registerClass(className, this);
}

void FoodHelper::finalizeHelper() {
	FoodHelper::finalize();
}

DistributedObject* FoodHelper::instantiateObject() {
	return new Food(DummyConstructorParameter::instance());
}

DistributedObjectServant* FoodHelper::instantiateServant() {
	return new FoodImplementation();
}

DistributedObjectAdapter* FoodHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new FoodAdapter(static_cast<Food*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

