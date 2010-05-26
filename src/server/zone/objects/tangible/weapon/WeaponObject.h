/*
 *	server/zone/objects/tangible/weapon/WeaponObject.h generated by engine3 IDL compiler 0.60
 */

#ifndef WEAPONOBJECT_H_
#define WEAPONOBJECT_H_

#include "engine/orb/DistributedObjectBroker.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

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
namespace packets {
namespace scene {

class AttributeListMessage;

} // namespace scene
} // namespace packets
} // namespace zone
} // namespace server

using namespace server::zone::packets::scene;

namespace server {
namespace zone {

class Zone;

} // namespace zone
} // namespace server

using namespace server::zone;

#include "server/zone/templates/SharedObjectTemplate.h"

#include "server/zone/objects/tangible/TangibleObject.h"

#include "engine/lua/LuaObject.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace weapon {

class WeaponObject : public TangibleObject {
public:
	static const int NONE = 0;

	static const int LIGHT = 1;

	static const int MEDIUM = 2;

	static const int HEAVY = 3;

	static const int KINETIC = 1;

	static const int ENERGY = 2;

	static const int ELECTRICITY = 3;

	static const int STUN = 4;

	static const int BLAST = 5;

	static const int HEAT = 6;

	static const int COLD = 7;

	static const int ACID = 8;

	static const int LIGHTSABER = 9;

	static const int FORCE = 10;

	static const int MELEEATTACK = 0;

	static const int RANGEDATTACK = 1;

	static const int FORCEATTACK = 2;

	static const int TRAPATTACK = 3;

	static const int GRENADEATTACK = 4;

	static const int HEAVYACIDBEAMATTACK = 14;

	static const int HEAVYLIGHTNINGBEAMATTACK = 15;

	static const int HEAVYPARTICLEBEAMATTACK = 17;

	static const int HEAVYROCKETLAUNCHERATTACK = 18;

	static const int HEAVYLAUNCHERATTACK = 19;

	WeaponObject();

	void loadTemplateData(SharedObjectTemplate* templateData);

	void initializeTransientMembers();

	void sendBaselinesTo(SceneObject* player);

	void fillAttributeList(AttributeListMessage* msg, PlayerCreature* object);

	bool isCertifiedFor(PlayerCreature* object);

	Vector<String>* getDamageModifiers();

	Vector<String>* getSpeedModifiers();

	Vector<String>* getCreatureAccuracyModifiers();

	Vector<String>* getDefenderDefenseModifiers();

	Vector<String>* getDefenderSecondaryDefenseModifiers();

	void setCertified(bool cert);

	int getAttackType();

	bool isCertified();

	int getPointBlankAccuracy();

	int getPointBlankRange();

	int getIdealRange();

	int getMaxRange();

	int getIdealAccuracy();

	int getArmorPiercing();

	int getMaxRangeAccuracy();

	float getAttackSpeed();

	float getMaxDamage();

	float getMinDamage();

	float getWoundsRatio();

	int getHealthAttackCost();

	int getActionAttackCost();

	int getMindAttackCost();

	int getForceCost();

	int getDamageType();

	bool hasMeleeAttack();

	bool hasRangedAttack();

	bool isUnarmedWeapon();

	bool isMeleeWeapon();

	bool isRangedWeapon();

	bool isRifleWeapon();

	bool isPistolWeapon();

	bool isOneHandMeleeWeapon();

	bool isPolearmWeaponObject();

	bool isTwoHandMeleeWeapon();

	bool isWeaponObject();

protected:
	WeaponObject(DummyConstructorParameter* param);

	virtual ~WeaponObject();

	friend class WeaponObjectHelper;
};

} // namespace weapon
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::weapon;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace weapon {

class WeaponObjectImplementation : public TangibleObjectImplementation {
protected:
	int attackType;

	String weaponEffect;

	int weaponEffectIndex;

	bool certified;

	int armorPiercing;

	int pointBlankAccuracy;

	int pointBlankRange;

	int idealRange;

	int idealAccuracy;

	int maxRange;

	int maxRangeAccuracy;

	int damageType;

	float attackSpeed;

	float minDamage;

	float maxDamage;

	float area;

	float woundsRatio;

	int healthAttackCost;

	int actionAttackCost;

	int mindAttackCost;

	int forceCost;

	Vector<String> damageModifiers;

	Vector<String> speedModifiers;

	Vector<String> creatureAccuracyModifiers;

	Vector<String> defenderDefenseModifiers;

	Vector<String> certificationsRequired;

	Vector<String> defenderSecondaryDefenseModifiers;

public:
	static const int NONE = 0;

	static const int LIGHT = 1;

	static const int MEDIUM = 2;

	static const int HEAVY = 3;

	static const int KINETIC = 1;

	static const int ENERGY = 2;

	static const int ELECTRICITY = 3;

	static const int STUN = 4;

	static const int BLAST = 5;

	static const int HEAT = 6;

	static const int COLD = 7;

	static const int ACID = 8;

	static const int LIGHTSABER = 9;

	static const int FORCE = 10;

	static const int MELEEATTACK = 0;

	static const int RANGEDATTACK = 1;

	static const int FORCEATTACK = 2;

	static const int TRAPATTACK = 3;

	static const int GRENADEATTACK = 4;

	static const int HEAVYACIDBEAMATTACK = 14;

	static const int HEAVYLIGHTNINGBEAMATTACK = 15;

	static const int HEAVYPARTICLEBEAMATTACK = 17;

	static const int HEAVYROCKETLAUNCHERATTACK = 18;

	static const int HEAVYLAUNCHERATTACK = 19;

	WeaponObjectImplementation();

	WeaponObjectImplementation(DummyConstructorParameter* param);

	void loadTemplateData(SharedObjectTemplate* templateData);

	void initializeTransientMembers();

	void sendBaselinesTo(SceneObject* player);

	void fillAttributeList(AttributeListMessage* msg, PlayerCreature* object);

	bool isCertifiedFor(PlayerCreature* object);

	Vector<String>* getDamageModifiers();

	Vector<String>* getSpeedModifiers();

	Vector<String>* getCreatureAccuracyModifiers();

	Vector<String>* getDefenderDefenseModifiers();

	Vector<String>* getDefenderSecondaryDefenseModifiers();

	void setCertified(bool cert);

	int getAttackType();

	bool isCertified();

	int getPointBlankAccuracy();

	int getPointBlankRange();

	int getIdealRange();

	int getMaxRange();

	int getIdealAccuracy();

	int getArmorPiercing();

	int getMaxRangeAccuracy();

	float getAttackSpeed();

	float getMaxDamage();

	float getMinDamage();

	float getWoundsRatio();

	int getHealthAttackCost();

	int getActionAttackCost();

	int getMindAttackCost();

	int getForceCost();

	int getDamageType();

	bool hasMeleeAttack();

	bool hasRangedAttack();

	bool isUnarmedWeapon();

	virtual bool isMeleeWeapon();

	virtual bool isRangedWeapon();

	virtual bool isRifleWeapon();

	virtual bool isPistolWeapon();

	virtual bool isOneHandMeleeWeapon();

	virtual bool isPolearmWeaponObject();

	virtual bool isTwoHandMeleeWeapon();

	bool isWeaponObject();

	WeaponObject* _this;

	operator const WeaponObject*();

	DistributedObjectStub* _getStub();
protected:
	virtual ~WeaponObjectImplementation();

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

	friend class WeaponObject;
};

class WeaponObjectAdapter : public TangibleObjectAdapter {
public:
	WeaponObjectAdapter(WeaponObjectImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	void sendBaselinesTo(SceneObject* player);

	bool isCertifiedFor(PlayerCreature* object);

	void setCertified(bool cert);

	int getAttackType();

	bool isCertified();

	int getPointBlankAccuracy();

	int getPointBlankRange();

	int getIdealRange();

	int getMaxRange();

	int getIdealAccuracy();

	int getArmorPiercing();

	int getMaxRangeAccuracy();

	float getAttackSpeed();

	float getMaxDamage();

	float getMinDamage();

	float getWoundsRatio();

	int getHealthAttackCost();

	int getActionAttackCost();

	int getMindAttackCost();

	int getForceCost();

	int getDamageType();

	bool hasMeleeAttack();

	bool hasRangedAttack();

	bool isUnarmedWeapon();

	bool isMeleeWeapon();

	bool isRangedWeapon();

	bool isRifleWeapon();

	bool isPistolWeapon();

	bool isOneHandMeleeWeapon();

	bool isPolearmWeaponObject();

	bool isTwoHandMeleeWeapon();

	bool isWeaponObject();

};

class WeaponObjectHelper : public DistributedObjectClassHelper, public Singleton<WeaponObjectHelper> {
	static WeaponObjectHelper* staticInitializer;

public:
	WeaponObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<WeaponObjectHelper>;
};

} // namespace weapon
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::weapon;

#endif /*WEAPONOBJECT_H_*/
