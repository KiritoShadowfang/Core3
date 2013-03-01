/*
 *	server/zone/objects/mission/MissionObject.h generated by engine3 IDL compiler 0.60
 */

#ifndef MISSIONOBJECT_H_
#define MISSIONOBJECT_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {
namespace objects {
namespace waypoint {

class WaypointObject;

} // namespace waypoint
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::waypoint;

namespace server {
namespace zone {

class Zone;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {
namespace templates {

class SharedObjectTemplate;

} // namespace templates
} // namespace zone
} // namespace server

using namespace server::zone::templates;

namespace server {
namespace zone {
namespace objects {
namespace mission {

class MissionObserver;

} // namespace mission
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::mission;

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
namespace mission {

class MissionObjective;

} // namespace mission
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::mission;

namespace server {
namespace zone {
namespace managers {
namespace mission {
namespace spawnmaps {

class NpcSpawnPoint;

} // namespace spawnmaps
} // namespace mission
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::mission::spawnmaps;

#include "server/zone/objects/scene/variables/StringId.h"

#include "server/zone/templates/TemplateReference.h"

#include "engine/lua/LuaObject.h"

#include "server/zone/objects/intangible/IntangibleObject.h"

#include "system/util/SortedVector.h"

namespace server {
namespace zone {
namespace objects {
namespace mission {

class MissionObject : public IntangibleObject {
public:
	unsigned static const int DESTROY = 0x74EF9BE3;

	unsigned static const int BOUNTY = 0x2904F372;

	unsigned static const int DELIVER = 0xE5C27EC6;

	unsigned static const int CRAFTING = 0xE5F6DC59;

	unsigned static const int ESCORT = 0x682B871E;

	unsigned static const int ESCORT2ME = 0x58F59884;

	unsigned static const int ESCORTTOCREATOR = 0x5E4C7163;

	unsigned static const int HUNTING = 0x906999A2;

	unsigned static const int MUSICIAN = 0x4AD93196;

	unsigned static const int DANCER = 0xF067B37;

	unsigned static const int RECON = 0x34F4C2E4;

	unsigned static const int SURVEY = 0x19C9FAC1;

	static const int FACTIONNEUTRAL = 0;

	static const int FACTIONIMPERIAL = 0xDB4ACC54;

	static const int FACTIONREBEL = 0x16148850;

	MissionObject();

	WaypointObject* createWaypoint();

	void destroyObjectFromDatabase(bool destroyContainedObjects = false);

	void updateToDatabaseAllObjects(bool startTask);

	void setRefreshCounter(int ctr, bool notifyClient = true);

	void setTypeCRC(unsigned int crc, bool notifyClient = true);

	void initializeTransientMembers();

	void sendBaselinesTo(SceneObject* player);

	void setMissionDescription(const String& file, const String& id, bool notifyClient = true);

	void setMissionTitle(const String& file, const String& id, bool notifyClient = true);

	void setMissionTargetName(const String& target, bool notifyClient = true);

	void setMissionDifficulty(int difficulty, bool notifyClient = true);

	void setMissionDifficulty(int difficulty, int display, bool notifyClient = true);

	void setRewardCredits(int creds, bool notifyClient = true);

	void setTargetTemplate(SharedObjectTemplate* templ, bool notifyClient = true);

	void setStartPosition(float posX, float posY, const String& planet, bool notifyClient = true);

	void setStartPosition(float posX, float posY, bool notifyClient = true);

	void setEndPosition(float posX, float posY, const String& planet, bool notifyClient = true);

	void setCreatorName(const String& name, bool notifyClient = true);

	unsigned int getStartPlanetCRC();

	void updateMissionLocation();

	void abort();

	void setFaction(const int missionFaction);

	void setMissionObjective(MissionObjective* obj);

	void setStartPlanet(const String& planet);

	void setRewardFactionPointsRebel(int points);

	void setRewardFactionPointsImperial(int points);

	void setEndPlanet(String& planetName);

	void setMissionTarget(NpcSpawnPoint* target);

	void setMissionTargetDest(NpcSpawnPoint* target);

	void setMissionNumber(int num);

	void setTargetOptionalTemplate(const String& tml);

	void setTemplateStrings(const String& temp1, const String& temp2);

	MissionObjective* getMissionObjective();

	int getFaction();

	int getRewardFactionPointsRebel();

	int getRewardFactionPointsImperial();

	float getStartPositionX();

	float getStartPositionY();

	String getTargetOptionalTemplate();

	String getStartPlanet();

	float getEndPositionX();

	float getEndPositionY();

	String getEndPlanet();

	WaypointObject* getWaypointToMission();

	NpcSpawnPoint* getMissionTarget();

	NpcSpawnPoint* getMissionTargetDest();

	unsigned int getTypeCRC();

	int getRewardCredits();

	UnicodeString getCreatorName();

	int getDifficultyLevel();

	int getDifficultyDisplay();

	StringId* getMissionDescription();

	StringId* getMissionTitle();

	String getTargetName();

	int getRefreshCounter();

	int getMissionNumber();

	SharedObjectTemplate* getTargetTemplate();

	bool isSurveyMission();

	bool isMissionObject();

	String getTemplateString1();

	String getTemplateString2();

	unsigned long long getTargetObjectId();

	void setTargetObjectId(unsigned long long id);

	void setMissionLevel(int level);

	int getMissionLevel();

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	MissionObject(DummyConstructorParameter* param);

	virtual ~MissionObject();

	friend class MissionObjectHelper;
};

} // namespace mission
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::mission;

namespace server {
namespace zone {
namespace objects {
namespace mission {

class MissionObjectImplementation : public IntangibleObjectImplementation {
protected:
	ManagedReference<WaypointObject* > waypointToMission;

	ManagedReference<MissionObjective* > missionObjective;

	unsigned int typeCRC;

	int difficultyLevel;

	int difficultyDisplay;

	UnicodeString creatorName;

	int rewardCredits;

	int rewardFactionPointsRebel;

	int rewardFactionPointsImperial;

	int missionNumber;

	int faction;

	int missionLevel;

	float startPositionX;

	float startPositionY;

	String startPlanet;

	float endPositionX;

	float endPositionY;

	String endPlanet;

	unsigned long long targetObjectId;

	StringId missionDescription;

	StringId missionTitle;

	unsigned int refreshCounter;

	String targetName;

	Reference<NpcSpawnPoint* > missionTarget;

	Reference<NpcSpawnPoint* > missionTargetDest;

	String templateString1;

	String templateString2;

	TemplateReference<SharedObjectTemplate*> targetTemplate;

	String targetOptionalTemplate;

public:
	unsigned static const int DESTROY = 0x74EF9BE3;

	unsigned static const int BOUNTY = 0x2904F372;

	unsigned static const int DELIVER = 0xE5C27EC6;

	unsigned static const int CRAFTING = 0xE5F6DC59;

	unsigned static const int ESCORT = 0x682B871E;

	unsigned static const int ESCORT2ME = 0x58F59884;

	unsigned static const int ESCORTTOCREATOR = 0x5E4C7163;

	unsigned static const int HUNTING = 0x906999A2;

	unsigned static const int MUSICIAN = 0x4AD93196;

	unsigned static const int DANCER = 0xF067B37;

	unsigned static const int RECON = 0x34F4C2E4;

	unsigned static const int SURVEY = 0x19C9FAC1;

	static const int FACTIONNEUTRAL = 0;

	static const int FACTIONIMPERIAL = 0xDB4ACC54;

	static const int FACTIONREBEL = 0x16148850;

	MissionObjectImplementation();

	MissionObjectImplementation(DummyConstructorParameter* param);

	WaypointObject* createWaypoint();

	void destroyObjectFromDatabase(bool destroyContainedObjects = false);

	void updateToDatabaseAllObjects(bool startTask);

	void setRefreshCounter(int ctr, bool notifyClient = true);

	void setTypeCRC(unsigned int crc, bool notifyClient = true);

	void initializeTransientMembers();

	void sendBaselinesTo(SceneObject* player);

	void setMissionDescription(const String& file, const String& id, bool notifyClient = true);

	void setMissionTitle(const String& file, const String& id, bool notifyClient = true);

	void setMissionTargetName(const String& target, bool notifyClient = true);

	void setMissionDifficulty(int difficulty, bool notifyClient = true);

	void setMissionDifficulty(int difficulty, int display, bool notifyClient = true);

	void setRewardCredits(int creds, bool notifyClient = true);

	void setTargetTemplate(SharedObjectTemplate* templ, bool notifyClient = true);

	void setStartPosition(float posX, float posY, const String& planet, bool notifyClient = true);

	void setStartPosition(float posX, float posY, bool notifyClient = true);

	void setEndPosition(float posX, float posY, const String& planet, bool notifyClient = true);

	void setCreatorName(const String& name, bool notifyClient = true);

	unsigned int getStartPlanetCRC();

	void updateMissionLocation();

	void abort();

	void setFaction(const int missionFaction);

	void setMissionObjective(MissionObjective* obj);

	void setStartPlanet(const String& planet);

	void setRewardFactionPointsRebel(int points);

	void setRewardFactionPointsImperial(int points);

	void setEndPlanet(String& planetName);

	void setMissionTarget(NpcSpawnPoint* target);

	void setMissionTargetDest(NpcSpawnPoint* target);

	void setMissionNumber(int num);

	void setTargetOptionalTemplate(const String& tml);

	void setTemplateStrings(const String& temp1, const String& temp2);

	MissionObjective* getMissionObjective();

	int getFaction();

	int getRewardFactionPointsRebel();

	int getRewardFactionPointsImperial();

	float getStartPositionX();

	float getStartPositionY();

	String getTargetOptionalTemplate();

	String getStartPlanet();

	float getEndPositionX();

	float getEndPositionY();

	String getEndPlanet();

	WaypointObject* getWaypointToMission();

	NpcSpawnPoint* getMissionTarget();

	NpcSpawnPoint* getMissionTargetDest();

	unsigned int getTypeCRC();

	int getRewardCredits();

	UnicodeString getCreatorName();

	int getDifficultyLevel();

	int getDifficultyDisplay();

	StringId* getMissionDescription();

	StringId* getMissionTitle();

	String getTargetName();

	int getRefreshCounter();

	int getMissionNumber();

	SharedObjectTemplate* getTargetTemplate();

	bool isSurveyMission();

	bool isMissionObject();

	String getTemplateString1();

	String getTemplateString2();

	unsigned long long getTargetObjectId();

	void setTargetObjectId(unsigned long long id);

	void setMissionLevel(int level);

	int getMissionLevel();

	WeakReference<MissionObject*> _this;

	operator const MissionObject*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~MissionObjectImplementation();

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

	friend class MissionObject;
};

class MissionObjectAdapter : public IntangibleObjectAdapter {
public:
	MissionObjectAdapter(MissionObject* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	WaypointObject* createWaypoint();

	void destroyObjectFromDatabase(bool destroyContainedObjects);

	void updateToDatabaseAllObjects(bool startTask);

	void setRefreshCounter(int ctr, bool notifyClient);

	void setTypeCRC(unsigned int crc, bool notifyClient);

	void initializeTransientMembers();

	void sendBaselinesTo(SceneObject* player);

	void setMissionDescription(const String& file, const String& id, bool notifyClient);

	void setMissionTitle(const String& file, const String& id, bool notifyClient);

	void setMissionTargetName(const String& target, bool notifyClient);

	void setMissionDifficulty(int difficulty, bool notifyClient);

	void setMissionDifficulty(int difficulty, int display, bool notifyClient);

	void setRewardCredits(int creds, bool notifyClient);

	void setStartPosition(float posX, float posY, const String& planet, bool notifyClient);

	void setStartPosition(float posX, float posY, bool notifyClient);

	void setEndPosition(float posX, float posY, const String& planet, bool notifyClient);

	void setCreatorName(const String& name, bool notifyClient);

	unsigned int getStartPlanetCRC();

	void updateMissionLocation();

	void abort();

	void setFaction(const int missionFaction);

	void setMissionObjective(MissionObjective* obj);

	void setStartPlanet(const String& planet);

	void setRewardFactionPointsRebel(int points);

	void setRewardFactionPointsImperial(int points);

	void setEndPlanet(String& planetName);

	void setMissionTarget(NpcSpawnPoint* target);

	void setMissionTargetDest(NpcSpawnPoint* target);

	void setMissionNumber(int num);

	void setTargetOptionalTemplate(const String& tml);

	void setTemplateStrings(const String& temp1, const String& temp2);

	MissionObjective* getMissionObjective();

	int getFaction();

	int getRewardFactionPointsRebel();

	int getRewardFactionPointsImperial();

	float getStartPositionX();

	float getStartPositionY();

	String getTargetOptionalTemplate();

	String getStartPlanet();

	float getEndPositionX();

	float getEndPositionY();

	String getEndPlanet();

	WaypointObject* getWaypointToMission();

	NpcSpawnPoint* getMissionTarget();

	NpcSpawnPoint* getMissionTargetDest();

	unsigned int getTypeCRC();

	int getRewardCredits();

	UnicodeString getCreatorName();

	int getDifficultyLevel();

	int getDifficultyDisplay();

	String getTargetName();

	int getRefreshCounter();

	int getMissionNumber();

	bool isSurveyMission();

	bool isMissionObject();

	String getTemplateString1();

	String getTemplateString2();

	unsigned long long getTargetObjectId();

	void setTargetObjectId(unsigned long long id);

	void setMissionLevel(int level);

	int getMissionLevel();

};

class MissionObjectHelper : public DistributedObjectClassHelper, public Singleton<MissionObjectHelper> {
	static MissionObjectHelper* staticInitializer;

public:
	MissionObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<MissionObjectHelper>;
};

} // namespace mission
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::mission;

#endif /*MISSIONOBJECT_H_*/
