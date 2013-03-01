/*
 *	server/zone/objects/tangible/pharmaceutical/WoundPack.cpp generated by engine3 IDL compiler 0.60
 */

#include "WoundPack.h"

#include "server/zone/objects/tangible/TangibleObject.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/Zone.h"

#include "server/zone/packets/scene/AttributeListMessage.h"

#include "server/zone/packets/object/ObjectMenuResponse.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/ZoneServer.h"

#include "server/zone/objects/manufactureschematic/ManufactureSchematic.h"

#include "server/zone/managers/player/PlayerManager.h"

/*
 *	WoundPackStub
 */

enum {RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_,RPC_CALCULATEPOWER__CREATUREOBJECT_CREATUREOBJECT_BOOL_,RPC_GETEFFECTIVENESS__,RPC_ISWOUNDPACK__,RPC_GETATTRIBUTE__};

WoundPack::WoundPack() : PharmaceuticalObject(DummyConstructorParameter::instance()) {
	WoundPackImplementation* _implementation = new WoundPackImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("WoundPack");
}

WoundPack::WoundPack(DummyConstructorParameter* param) : PharmaceuticalObject(param) {
	_setClassName("WoundPack");
}

WoundPack::~WoundPack() {
}



void WoundPack::updateCraftingValues(CraftingValues* values, bool firstUpdate) {
	WoundPackImplementation* _implementation = static_cast<WoundPackImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->updateCraftingValues(values, firstUpdate);
}

void WoundPack::loadTemplateData(SharedObjectTemplate* templateData) {
	WoundPackImplementation* _implementation = static_cast<WoundPackImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->loadTemplateData(templateData);
}

void WoundPack::fillAttributeList(AttributeListMessage* msg, CreatureObject* object) {
	WoundPackImplementation* _implementation = static_cast<WoundPackImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->fillAttributeList(msg, object);
}

int WoundPack::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	WoundPackImplementation* _implementation = static_cast<WoundPackImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_);
		method.addObjectParameter(player);
		method.addByteParameter(selectedID);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->handleObjectMenuSelect(player, selectedID);
}

unsigned int WoundPack::calculatePower(CreatureObject* healer, CreatureObject* patient, bool applyBattleFatigue) {
	WoundPackImplementation* _implementation = static_cast<WoundPackImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CALCULATEPOWER__CREATUREOBJECT_CREATUREOBJECT_BOOL_);
		method.addObjectParameter(healer);
		method.addObjectParameter(patient);
		method.addBooleanParameter(applyBattleFatigue);

		return method.executeWithUnsignedIntReturn();
	} else
		return _implementation->calculatePower(healer, patient, applyBattleFatigue);
}

float WoundPack::getEffectiveness() {
	WoundPackImplementation* _implementation = static_cast<WoundPackImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETEFFECTIVENESS__);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getEffectiveness();
}

bool WoundPack::isWoundPack() {
	WoundPackImplementation* _implementation = static_cast<WoundPackImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISWOUNDPACK__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isWoundPack();
}

byte WoundPack::getAttribute() {
	WoundPackImplementation* _implementation = static_cast<WoundPackImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETATTRIBUTE__);

		return method.executeWithByteReturn();
	} else
		return _implementation->getAttribute();
}

DistributedObjectServant* WoundPack::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* WoundPack::_getImplementationForRead() {
	return _impl;
}

void WoundPack::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	WoundPackImplementation
 */

WoundPackImplementation::WoundPackImplementation(DummyConstructorParameter* param) : PharmaceuticalObjectImplementation(param) {
	_initializeImplementation();
}


WoundPackImplementation::~WoundPackImplementation() {
}


void WoundPackImplementation::finalize() {
}

void WoundPackImplementation::_initializeImplementation() {
	_setClassHelper(WoundPackHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void WoundPackImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<WoundPack*>(stub);
	PharmaceuticalObjectImplementation::_setStub(stub);
}

DistributedObjectStub* WoundPackImplementation::_getStub() {
	return _this.get();
}

WoundPackImplementation::operator const WoundPack*() {
	return _this.get();
}

void WoundPackImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void WoundPackImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void WoundPackImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void WoundPackImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void WoundPackImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void WoundPackImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void WoundPackImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void WoundPackImplementation::_serializationHelperMethod() {
	PharmaceuticalObjectImplementation::_serializationHelperMethod();

	_setClassName("WoundPack");

}

void WoundPackImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(WoundPackImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool WoundPackImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (PharmaceuticalObjectImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0xd5c96812: //WoundPack.effectiveness
		TypeInfo<float >::parseFromBinaryStream(&effectiveness, stream);
		return true;

	case 0xc4fddab7: //WoundPack.attribute
		TypeInfo<byte >::parseFromBinaryStream(&attribute, stream);
		return true;

	}

	return false;
}

void WoundPackImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = WoundPackImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int WoundPackImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = PharmaceuticalObjectImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	_nameHashCode = 0xd5c96812; //WoundPack.effectiveness
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&effectiveness, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0xc4fddab7; //WoundPack.attribute
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<byte >::toBinaryStream(&attribute, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);


	return _count + 2;
}

WoundPackImplementation::WoundPackImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl():  		setLoggingName("WoundPack");
	setLoggingName("WoundPack");
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl():  		effectiveness = 0;
	effectiveness = 0;
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl():  		attribute = 0;
	attribute = 0;
}

void WoundPackImplementation::updateCraftingValues(CraftingValues* values, bool firstUpdate) {
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl():  		effectiveness = values.getCurrentValue("power");
	effectiveness = values->getCurrentValue("power");
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl():  		super.medicineUseRequired = values.getCurrentValue("skillmodmin");
	PharmaceuticalObjectImplementation::medicineUseRequired = values->getCurrentValue("skillmodmin");
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl():  		setUseCount(values.getCurrentValue("charges"));
	setUseCount(values->getCurrentValue("charges"));
}

void WoundPackImplementation::loadTemplateData(SharedObjectTemplate* templateData) {
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl():  		super.loadTemplateData(templateData);
	PharmaceuticalObjectImplementation::loadTemplateData(templateData);
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl():  		WoundPackTemplate 
	if (!templateData->isWoundPackTemplate())	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl():  			return;
	return;
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl():  		WoundPackTemplate stimPackTemplate = (WoundPackTemplate) templateData;
	WoundPackTemplate* stimPackTemplate = (WoundPackTemplate*) templateData;
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl():  		effectiveness = stimPackTemplate.getEffectiveness();
	effectiveness = stimPackTemplate->getEffectiveness();
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl():  		super.medicineUseRequired = stimPackTemplate.getMedicineUse();
	PharmaceuticalObjectImplementation::medicineUseRequired = stimPackTemplate->getMedicineUse();
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl():  		attribute = stimPackTemplate.getAttribute();
	attribute = stimPackTemplate->getAttribute();
}

void WoundPackImplementation::fillAttributeList(AttributeListMessage* msg, CreatureObject* object) {
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl():  		super.fillAttributeList(msg, object);
	PharmaceuticalObjectImplementation::fillAttributeList(msg, object);
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl():  		msg.insertAttribute("examine_heal_wound_" + CreatureAttribute.getName(attribute), Math.getPrecision(effectiveness, 0));
	msg->insertAttribute("examine_heal_wound_" + CreatureAttribute::getName(attribute), Math::getPrecision(effectiveness, 0));
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl():  		msg.insertAttribute("healing_ability", super.medicineUseRequired);
	msg->insertAttribute("healing_ability", PharmaceuticalObjectImplementation::medicineUseRequired);
}

int WoundPackImplementation::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl():  		if 
	if (!isASubChildOf(player))	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl():  			return 0;
	return 0;
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl():  		if 
	if (selectedID != 20)	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl():  			return 1;
	return 1;
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl():  		}
	if (player->getSkillMod("healing_ability") < PharmaceuticalObjectImplementation::medicineUseRequired){
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl():  			player.sendSystemMessage("@error_message:insufficient_skill");
	player->sendSystemMessage("@error_message:insufficient_skill");
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl():  			return 0;
	return 0;
}

	else {
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl():  			string command = "/healwound ";
	String command = "/healwound ";
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl():  			command = command + CreatureAttribute.getName(attribute);
	command = command + CreatureAttribute::getName(attribute);
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl():  			command = command + "|";
	command = command + "|";
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl():  			command = command + String.valueOf(super.getObjectID());
	command = command + String::valueOf(PharmaceuticalObjectImplementation::getObjectID());
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl():  			player.sendExecuteConsoleCommand(command);
	player->sendExecuteConsoleCommand(command);
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl():  			return 0;
	return 0;
}
}

unsigned int WoundPackImplementation::calculatePower(CreatureObject* healer, CreatureObject* patient, bool applyBattleFatigue) {
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl():  		float power = getEffectiveness();
	float power = getEffectiveness();
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl():  		ZoneServer 
	if (applyBattleFatigue){
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl():  			power = power - (power * patient.calculateBFRatio() * healer.calculateBFRatio());
	power = power - (power * patient->calculateBFRatio() * healer->calculateBFRatio());
}
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl():  		ZoneServer zoneServer = super.getZoneServer();
	ManagedReference<ZoneServer* > zoneServer = PharmaceuticalObjectImplementation::getZoneServer();
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl():  		PlayerManager playerManager = zoneServer.getPlayerManager();
	ManagedReference<PlayerManager* > playerManager = zoneServer->getPlayerManager();
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl():  		float modEnvironment = 1 + ((float) healer.getSkillMod("private_medical_rating") / 100.0f);
	float modEnvironment = 1 + ((float) healer->getSkillMod("private_medical_rating") / 100.0f);
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl():  		float modSkill = (float) healer.getSkillMod("healing_wound_treatment");
	float modSkill = (float) healer->getSkillMod("healing_wound_treatment");
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl():  		return (power * modEnvironment * (100.0f + modSkill) / 100.0f);
	return (power * modEnvironment * (100.0f + modSkill) / 100.0f);
}

float WoundPackImplementation::getEffectiveness() {
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl():  		return effectiveness;
	return effectiveness;
}

bool WoundPackImplementation::isWoundPack() {
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl():  		return true;
	return true;
}

byte WoundPackImplementation::getAttribute() {
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl():  		return attribute;
	return attribute;
}

/*
 *	WoundPackAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


WoundPackAdapter::WoundPackAdapter(WoundPack* obj) : PharmaceuticalObjectAdapter(obj) {
}

void WoundPackAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_:
		{
			resp->insertSignedInt(handleObjectMenuSelect(static_cast<CreatureObject*>(inv->getObjectParameter()), inv->getByteParameter()));
		}
		break;
	case RPC_CALCULATEPOWER__CREATUREOBJECT_CREATUREOBJECT_BOOL_:
		{
			resp->insertInt(calculatePower(static_cast<CreatureObject*>(inv->getObjectParameter()), static_cast<CreatureObject*>(inv->getObjectParameter()), inv->getBooleanParameter()));
		}
		break;
	case RPC_GETEFFECTIVENESS__:
		{
			resp->insertFloat(getEffectiveness());
		}
		break;
	case RPC_ISWOUNDPACK__:
		{
			resp->insertBoolean(isWoundPack());
		}
		break;
	case RPC_GETATTRIBUTE__:
		{
			resp->insertByte(getAttribute());
		}
		break;
	default:
		throw Exception("Method does not exists");
	}
}

int WoundPackAdapter::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	return (static_cast<WoundPack*>(stub))->handleObjectMenuSelect(player, selectedID);
}

unsigned int WoundPackAdapter::calculatePower(CreatureObject* healer, CreatureObject* patient, bool applyBattleFatigue) {
	return (static_cast<WoundPack*>(stub))->calculatePower(healer, patient, applyBattleFatigue);
}

float WoundPackAdapter::getEffectiveness() {
	return (static_cast<WoundPack*>(stub))->getEffectiveness();
}

bool WoundPackAdapter::isWoundPack() {
	return (static_cast<WoundPack*>(stub))->isWoundPack();
}

byte WoundPackAdapter::getAttribute() {
	return (static_cast<WoundPack*>(stub))->getAttribute();
}

/*
 *	WoundPackHelper
 */

WoundPackHelper* WoundPackHelper::staticInitializer = WoundPackHelper::instance();

WoundPackHelper::WoundPackHelper() {
	className = "WoundPack";

	Core::getObjectBroker()->registerClass(className, this);
}

void WoundPackHelper::finalizeHelper() {
	WoundPackHelper::finalize();
}

DistributedObject* WoundPackHelper::instantiateObject() {
	return new WoundPack(DummyConstructorParameter::instance());
}

DistributedObjectServant* WoundPackHelper::instantiateServant() {
	return new WoundPackImplementation();
}

DistributedObjectAdapter* WoundPackHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new WoundPackAdapter(static_cast<WoundPack*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

