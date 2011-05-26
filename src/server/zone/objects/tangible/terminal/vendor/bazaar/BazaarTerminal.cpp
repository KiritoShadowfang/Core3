/*
 *	server/zone/objects/tangible/terminal/vendor/bazaar/BazaarTerminal.cpp generated by engine3 IDL compiler 0.60
 */

#include "BazaarTerminal.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/player/PlayerCreature.h"

#include "server/zone/packets/object/ObjectMenuResponse.h"

#include "server/zone/Zone.h"

#include "server/zone/templates/SharedObjectTemplate.h"

/*
 *	BazaarTerminalStub
 */

enum {RPC_HANDLEOBJECTMENUSELECT__PLAYERCREATURE_BYTE_,RPC_ISBAZAARTERMINAL__};

BazaarTerminal::BazaarTerminal() : VendorTerminal(DummyConstructorParameter::instance()) {
	BazaarTerminalImplementation* _implementation = new BazaarTerminalImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
}

BazaarTerminal::BazaarTerminal(DummyConstructorParameter* param) : VendorTerminal(param) {
}

BazaarTerminal::~BazaarTerminal() {
}


void BazaarTerminal::loadTemplateData(SharedObjectTemplate* templateData) {
	BazaarTerminalImplementation* _implementation = (BazaarTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->loadTemplateData(templateData);
}

int BazaarTerminal::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	BazaarTerminalImplementation* _implementation = (BazaarTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_HANDLEOBJECTMENUSELECT__PLAYERCREATURE_BYTE_);
		method.addObjectParameter(player);
		method.addByteParameter(selectedID);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->handleObjectMenuSelect(player, selectedID);
}

bool BazaarTerminal::isBazaarTerminal() {
	BazaarTerminalImplementation* _implementation = (BazaarTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISBAZAARTERMINAL__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isBazaarTerminal();
}

DistributedObjectServant* BazaarTerminal::_getImplementation() {

	_updated = true;
	return _impl;
}

void BazaarTerminal::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	BazaarTerminalImplementation
 */

BazaarTerminalImplementation::BazaarTerminalImplementation(DummyConstructorParameter* param) : VendorTerminalImplementation(param) {
	_initializeImplementation();
}


BazaarTerminalImplementation::~BazaarTerminalImplementation() {
}


void BazaarTerminalImplementation::finalize() {
}

void BazaarTerminalImplementation::_initializeImplementation() {
	_setClassHelper(BazaarTerminalHelper::instance());

	_serializationHelperMethod();
	_serializationHelperMethod();
}

void BazaarTerminalImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (BazaarTerminal*) stub;
	VendorTerminalImplementation::_setStub(stub);
}

DistributedObjectStub* BazaarTerminalImplementation::_getStub() {
	return _this;
}

BazaarTerminalImplementation::operator const BazaarTerminal*() {
	return _this;
}

void BazaarTerminalImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void BazaarTerminalImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void BazaarTerminalImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void BazaarTerminalImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void BazaarTerminalImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void BazaarTerminalImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void BazaarTerminalImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void BazaarTerminalImplementation::_serializationHelperMethod() {
	VendorTerminalImplementation::_serializationHelperMethod();

	_setClassName("BazaarTerminal");

}

void BazaarTerminalImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(BazaarTerminalImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool BazaarTerminalImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (VendorTerminalImplementation::readObjectMember(stream, _name))
		return true;


	return false;
}

void BazaarTerminalImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = BazaarTerminalImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int BazaarTerminalImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	String _name;
	int _offset;
	uint16 _totalSize;

	return 0 + VendorTerminalImplementation::writeObjectMembers(stream);
}

BazaarTerminalImplementation::BazaarTerminalImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/terminal/vendor/bazaar/BazaarTerminal.idl():  		Logger.setLoggingName("BazaarTerminal");
	Logger::setLoggingName("BazaarTerminal");
}

int BazaarTerminalImplementation::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	// server/zone/objects/tangible/terminal/vendor/bazaar/BazaarTerminal.idl():  		return 0;
	return 0;
}

bool BazaarTerminalImplementation::isBazaarTerminal() {
	// server/zone/objects/tangible/terminal/vendor/bazaar/BazaarTerminal.idl():  		return true;
	return true;
}

/*
 *	BazaarTerminalAdapter
 */

BazaarTerminalAdapter::BazaarTerminalAdapter(BazaarTerminalImplementation* obj) : VendorTerminalAdapter(obj) {
}

Packet* BazaarTerminalAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case RPC_HANDLEOBJECTMENUSELECT__PLAYERCREATURE_BYTE_:
		resp->insertSignedInt(handleObjectMenuSelect((PlayerCreature*) inv->getObjectParameter(), inv->getByteParameter()));
		break;
	case RPC_ISBAZAARTERMINAL__:
		resp->insertBoolean(isBazaarTerminal());
		break;
	default:
		return NULL;
	}

	return resp;
}

int BazaarTerminalAdapter::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	return ((BazaarTerminalImplementation*) impl)->handleObjectMenuSelect(player, selectedID);
}

bool BazaarTerminalAdapter::isBazaarTerminal() {
	return ((BazaarTerminalImplementation*) impl)->isBazaarTerminal();
}

/*
 *	BazaarTerminalHelper
 */

BazaarTerminalHelper* BazaarTerminalHelper::staticInitializer = BazaarTerminalHelper::instance();

BazaarTerminalHelper::BazaarTerminalHelper() {
	className = "BazaarTerminal";

	Core::getObjectBroker()->registerClass(className, this);
}

void BazaarTerminalHelper::finalizeHelper() {
	BazaarTerminalHelper::finalize();
}

DistributedObject* BazaarTerminalHelper::instantiateObject() {
	return new BazaarTerminal(DummyConstructorParameter::instance());
}

DistributedObjectServant* BazaarTerminalHelper::instantiateServant() {
	return new BazaarTerminalImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* BazaarTerminalHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new BazaarTerminalAdapter((BazaarTerminalImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

