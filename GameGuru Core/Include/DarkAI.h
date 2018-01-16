
#include <windows.h>

#define DLLEXPORT 

//void ReceiveCoreDataPtr ( void* cdp );
DLLEXPORT float		AIRayCast ( float x, float y, float z, float x2, float y2, float z2 );
DLLEXPORT void		AIStart ( int iGUIShaderEffectIndex );
DLLEXPORT void		AIReset ( int iStopTheadLoop ); 
DLLEXPORT void		AISetAvoidMode ( int iNewMode );
DLLEXPORT float		AILastObstacleCenterX ();
DLLEXPORT float		AILastObstacleCenterZ ();
DLLEXPORT float		AILastObstacleRadius ();
DLLEXPORT void		AIAddStaticObstacle ( int iObjID, int iHeight, int iContainerID );
DLLEXPORT void		AIAddStaticObstacle ( int iObjID, int iHeight );
DLLEXPORT void		AIAddStaticObstacle ( int iObjID );
DLLEXPORT void		AIAddViewBlockingObstacle ( int iObjID, int iHeight, int iContainerID );
DLLEXPORT void		AIAddViewBlockingObstacle ( int iObjID, int iHeight );
DLLEXPORT void		AIAddViewBlockingObstacle ( int iObjID );
DLLEXPORT void		AIRemoveObstacle ( int iObjID );
DLLEXPORT void		AIAddObstacleFromLevel ( int iObjID, float fPlaneHeight, float fMinLength, float fMinHeight );
DLLEXPORT void		AIAddObstacleFromLevel ( int iObjID, int iContainerID, float fPlaneHeight, float fMinLength, float fMinHeight );
DLLEXPORT void		AIAddObstacleFromLevel ( int iObjID, int iContainerID, int iHeight, float fPlaneHeight, float fMinLength, float fMinHeight );
DLLEXPORT void		AIAddObstacleFromLevel ( int iObjID, int iContainerID, int iHeight, float fPlaneHeight, float fMinLength, float fMinHeight, int iOutputToFile );
DLLEXPORT void		AIAddAlternateVisibilityObject( int iObjID, int type );
DLLEXPORT void		AIRemoveAlternateVisibilityObject( int iObjID );
DLLEXPORT void		AICompleteObstacles ( );
DLLEXPORT void		AICompleteObstacles ( int iContainerID );
DLLEXPORT void		AIAddPlayer ( int iObjID, int iUseObject );
DLLEXPORT void		AIAddPlayer ( int iObjID );
DLLEXPORT void		AIAddFriendly ( int iObjID, int iUseObject, int iContainerID );
DLLEXPORT void		AIAddFriendly ( int iObjID, int iUseObject );
DLLEXPORT void		AIAddFriendly ( int iObjID );
DLLEXPORT void 		AIAddNeutral ( int iObjID, int iUseObject, int iContainerID );
DLLEXPORT void 		AIAddNeutral ( int iObjID, int iUseObject );
DLLEXPORT void 		AIAddNeutral ( int iObjID );
DLLEXPORT void 		AIAddEnemy ( int iObjID, int iUseObject, int iContainerID );
DLLEXPORT void 		AIAddEnemy ( int iObjID, int iUseObject );
DLLEXPORT void 		AIAddEnemy ( int iObjID );
DLLEXPORT void 		AIStartNewObstacle ( int id );
DLLEXPORT void 		AIStartNewObstacle ( );
DLLEXPORT void 		AIAddObstacleVertex ( float x, float z );
DLLEXPORT void 		AIEndNewObstacle ( int iContainerID, int iHeight );
DLLEXPORT void 		AIEndNewObstacle ( int iContainerID, int iHeight, int iObstacleType );
DLLEXPORT void 		AIDiscardNewObstacle ( );
DLLEXPORT void 		AIAddContainer ( int iContainerID );
DLLEXPORT int		AIConnectContainers( int iFromContainer, float x, float z, int iToContainer, float x2, float z2 );
DLLEXPORT void 		AIRemoveContainer ( int iContainerID );
DLLEXPORT int		AIGetEntityChangingContainers( int iObjID );
DLLEXPORT void		AISetEntityRadius( int iObjID, float fRadius );
DLLEXPORT void		AISetPlayerRadius( float fRadius );
DLLEXPORT int 		AIContainerExist ( int iContainerID );
DLLEXPORT void 		AISetContainerActive ( int iContainerID, int iActive );
DLLEXPORT void 		AIAddZone ( int iID, float minx, float minz, float maxx, float maxz );
DLLEXPORT void 		AIAddZone ( int iID, float minx, float minz, float maxx, float maxz, int iContainerID );
DLLEXPORT int 		AIZoneExist ( int iID );
DLLEXPORT void 		AIRemoveZone ( int iID );
DLLEXPORT void 		AIEntityAssignZone ( int iEntityID, int iZoneID );
DLLEXPORT void 		AIEntityRemoveZone ( int iEntityID, int iZoneID );
DLLEXPORT void 		AIKillEntity ( int iEntityID );
DLLEXPORT void 		AIKillPlayer ( );
DLLEXPORT void 		AIMakePath ( int iPathID );
DLLEXPORT void 		AIDeletePath ( int iPathID );
DLLEXPORT void 		AIPathAddPoint ( int iPathID, float x, float y, float z, int container );
DLLEXPORT int 		AIPathCountPoints ( int iPathID );
DLLEXPORT void 		AIMakeMemblockFromPath ( int iMemblockID, int iPathID );
DLLEXPORT void 		AIMakePathFromMemblock ( int iPathID, int iMemblockID );
DLLEXPORT void 		AIMakePathBetweenPoints ( int iPathID, int iContainerID, float x, float z, float x2, float z2, float fMaxEdgeCost, int destContainer );
DLLEXPORT void 		AIMakePathBetweenPoints ( int iPathID, int iContainerID, float x, float z, float x2, float z2, float fMaxEdgeCost );
DLLEXPORT void 		AIMakePathBetweenPoints ( int iPathID, int iContainerID, float x, float z, float x2, float z2 );
DLLEXPORT void 		AIMakePathBetweenPoints ( int iPathID, float x, float z, float x2, float z2 );
DLLEXPORT void 		AIMakePathFromClosestWaypoints ( int iPathID, int iContainerID, float x, float z );
DLLEXPORT void 		AIEntityAssignPatrolPath ( int iEntityID, int iPathID );
DLLEXPORT void		AIEntityAddTarget( int iEntityID, int iTargetID );
DLLEXPORT void		AIEntityRemoveTarget( int iEntityID, int iTargetID );
DLLEXPORT int 		AIGetPlayerInZone( int iZoneID );
DLLEXPORT int 		AIGetEntityInZone ( int iEntityID, int iZoneID );
DLLEXPORT void 		AISetEntitySpeed ( int iObjID, float fNewSpeed );
DLLEXPORT void 		AISetEntityTurnSpeed ( int iObjID, float fNewSpeed );
DLLEXPORT void 		AISetEntityPatrolTime ( int iObjID, float fNewTime );
DLLEXPORT void 		AISetEntityStance ( int iObjID, int iNewValue );
DLLEXPORT void 		AISetEntityAggressive ( int iObjID );
DLLEXPORT void		AISetEntityMeleeMode( int iObjID, int mode );
DLLEXPORT void 		AISetEntityActive ( int iObjID, int iActive );
DLLEXPORT void 		AISetEntityAttackDistance( int iObjID, float fNewDist );
DLLEXPORT void 		AISetEntityAvoidDistance( int iObjID, float fNewDist );
DLLEXPORT void		AISetEntityAvoidMode( int iObjID, int iNewMode );
DLLEXPORT int		AIGetEntityAvoidMode( int iObjID );
DLLEXPORT void		AISetEntityAlwaysActive ( int iObjID, bool bFlag );
DLLEXPORT void 		AISetEntityRunAwayWhenHit ( int iObjID );
DLLEXPORT void 		AIEntityHoldPosition ( int iObjID );
DLLEXPORT void 		AISetEntityPosition ( int iObjID, float x, float z );
DLLEXPORT void 		AISetEntityPosition ( int iObjID, float x, float y, float z );
DLLEXPORT void		AIStayWithinContainer ( int iObjID, float fLastX, float fLastZ, float* pX, float* pZ );
DLLEXPORT void 		AISetEntityYPosition ( int iObjID, float y );
DLLEXPORT void		AISetEntityHeight( int iObjID, float height );
DLLEXPORT void		AISetEntityAngleY( int iObjID, float angY );
DLLEXPORT void 		AISetPlayerPosition ( float x, float z );
DLLEXPORT void 		AISetPlayerPosition ( float x, float y, float z );
DLLEXPORT void		AISetPlayerAngleY( float angY );
DLLEXPORT void 		AISetPlayerContainer ( int iContainerID );
DLLEXPORT void 		AISetEntityContainer ( int iObjID, int iContainerID );
DLLEXPORT int 		AIGetEntityContainer ( int iObjID );
DLLEXPORT void 		AISetEntityViewArc ( int iObjID, float fNewValue, float fNewValue2 );
DLLEXPORT void 		AISetEntityViewRange ( int iObjID, float fNewValue );
DLLEXPORT void 		AISetEntityHearingRange ( int iObjID, float fNewValue );
DLLEXPORT void 		AISetEntityHearingThreshold ( int iObjID, int iNewValue );
DLLEXPORT void 		AISetEntityFireArc ( int iObjID, float fNewValue );
DLLEXPORT void 		AISetEntityCanDuck ( int iObjID, int iMode );
DLLEXPORT void 		AISetEntityCanAttack ( int iObjID, int iMode );
DLLEXPORT void 		AISetEntityCanStrafe ( int iObjID, int iMode );
DLLEXPORT void 		AISetEntityCanSearch ( int iObjID, int iMode );
DLLEXPORT void 		AISetEntityCanHear ( int iObjID, int iMode );
DLLEXPORT void 		AISetEntityCanRoam ( int iObjID, int iMode );
DLLEXPORT void		AISetEntityCanSelectTargets( int iEntityID, int iCanSelect );
DLLEXPORT void 		AISetPlayerDucking ( int iDuck );
DLLEXPORT void 		AISetPlayerHeight ( float height );
DLLEXPORT void 		AISetRadius ( float fNewRadius );
DLLEXPORT void 		AITeamFollowPlayer ( float fDist );
DLLEXPORT void 		AITeamSeparate ( );
DLLEXPORT int 		AIGetEntityFollowing( int iObjID );
DLLEXPORT void 		AIEntityFollowPlayer ( int iObjID, float fDist );
DLLEXPORT void 		AIEntitySeparate ( int iObjID );
DLLEXPORT void 		AIEntityReset ( int iObjID );
DLLEXPORT void 		AISetEntityDefendDist ( int iObjID, float fDist );
DLLEXPORT void 		AISetEntityDefending ( int iObjID, int iMode );
DLLEXPORT int 		AIGetEntityCanFire ( int iObjID );
DLLEXPORT int 		AIGetEntityIsDucking ( int iObjID );
DLLEXPORT float		AIGetEntityViewRange ( int iObjID );
DLLEXPORT float		AIGetEntitySpeed ( int iObjID );
DLLEXPORT int		AICouldSee ( int iObjID , float fX , float fY , float fZ );

DLLEXPORT int		AIGetTotalPaths();
DLLEXPORT int		AIGetPathCountPoints( int iID );
DLLEXPORT float		AIPathGetPointX ( int iPath, int iPoint );
DLLEXPORT float		AIPathGetPointY ( int iPath, int iPoint );
DLLEXPORT float		AIPathGetPointZ ( int iPath, int iPoint );

DLLEXPORT void		AIAddCoverPoint( float fx, float fy, float fz, float angle, LPSTR pStringPtr );
DLLEXPORT int		AIGetTotalCover();
DLLEXPORT float		AICoverGetPointX ( int iIndex );
DLLEXPORT float		AICoverGetPointY ( int iIndex );
DLLEXPORT float		AICoverGetPointZ ( int iIndex );
DLLEXPORT float		AICoverGetAngle ( int iIndex );
DLLEXPORT LPSTR		AICoverGetIfUsed ( int iIndex );

DLLEXPORT void 		AISetEntityHit ( int iObjID, float x, float z );
DLLEXPORT int 		AIEntityExist ( int iObjID );
DLLEXPORT void		AISetThreadMode( int iMode );
DLLEXPORT void		AISetThreadCount( int iMode );
DLLEXPORT void		AISetUndesirableGridSpace( int container, float x, float z );
DLLEXPORT void		AIClearUndesirableGridSpace( int container, float x, float z );
DLLEXPORT int		AIGetGridSpace( int container, float x, float z );
DLLEXPORT int		AIGetUndesirableGridSpace( int container, float x, float z );
DLLEXPORT void		AISetBlockingThreshold( int iValue );
DLLEXPORT void		AIAddDynamicBlocker( int id, int container, float x, float z, float radius );
DLLEXPORT void		AIRemoveDynamicBlocker( int id );
DLLEXPORT void		AISaveObstacleData( int iContainer, DWORD szFilename );
DLLEXPORT void		AILoadObstacleData( int iContainer, DWORD szFilename );
DLLEXPORT int		AICountContainerObstacles( int iContainer );
DLLEXPORT int		AICountContainerEdges( int iContainer );
DLLEXPORT void 		AIUpdate ( );
DLLEXPORT void 		AIUpdate ( float fUserTime );
DLLEXPORT int		AIGetEntityAvoiding ( int iObjID );

#ifdef DARKSDK_COMPILE
float 				AIGetPathPointX ( int iPathID, int iIndex );
float 				AIGetPathPointZ ( int iPathID, int iIndex );
float 				AIGetEntityX ( int iObjID );
float 				AIGetEntityZ ( int iObjID );
float 				AIGetEntityTargetX ( int iObjID );
float 				AIGetEntityTargetZ ( int iObjID );
float 				AIGetEntityMoveX ( int iObjID );
float 				AIGetEntityMoveZ ( int iObjID );
float 				AIGetEntityDestinationX ( int iObjID );
float 				AIGetEntityDestinationZ ( int iObjID );
float 				AIGetPlayerX ( int iObjID );
float 				AIGetPlayerZ ( int iObjID );
char*				AIGetEntityState ( int iObjID );
char*				AIGetEntityAction ( int iObjID );

#else

DLLEXPORT float		AIGetPathPointX ( int iPathID, int iIndex );
DLLEXPORT float		AIGetPathPointZ ( int iPathID, int iIndex );
DLLEXPORT float		AIGetEntityX ( int iObjID );
DLLEXPORT float		AIGetEntityY ( int iObjID );
DLLEXPORT float		AIGetEntityZ ( int iObjID );
DLLEXPORT float		AIGetEntityAngleY ( int iObjID );
DLLEXPORT float		AIGetEntityTargetX ( int iObjID );
DLLEXPORT float		AIGetEntityTargetZ ( int iObjID );
DLLEXPORT float		AIGetEntityMoveX ( int iObjID );
DLLEXPORT float		AIGetEntityMoveZ ( int iObjID );
DLLEXPORT float		AIGetEntityDestinationX ( int iObjID );
DLLEXPORT float		AIGetEntityDestinationZ ( int iObjID );
DLLEXPORT float		AIGetPlayerX ( );
DLLEXPORT float		AIGetPlayerZ ( );
DLLEXPORT LPSTR		AIGetEntityState ( int iObjID );
DLLEXPORT LPSTR		AIGetEntityAction ( int iObjID );

#endif

DLLEXPORT int		AIGetEntityTargetContainer ( int iObjID, int iIndex );
DLLEXPORT int		AIGetEntityTargetID ( int iObjID, int iIndex );
DLLEXPORT int		AIGetEntityTeam ( int iObjID );
DLLEXPORT int		AIGetEntityHeardSound ( int iObjID );
DLLEXPORT int		AIGetEntityCanSee ( int iObjID, float x, float y, float z, int ground );
DLLEXPORT int		AIGetEntityCanSee ( int iObjID, float x, float z, int ground );
DLLEXPORT int		AIGetEntityStance ( int iObjID );
DLLEXPORT void		AISetEntityNoLookAtPoint ( int iObjID );
DLLEXPORT void		AIEntityMoveToClosestSound ( int iObjID );
DLLEXPORT void		AIEntityMoveAwayFromSound ( int iObjID );
DLLEXPORT int		AIGetEntityIsMoving ( int iObjID );
DLLEXPORT int		AIGetEntityIsTurning ( int iObjID );
DLLEXPORT void		AISetEntityIdlePosition ( int iObjID, float x, float z );
DLLEXPORT void		AISetEntityIdlePosition ( int iObjID, float x, float z, int container );
DLLEXPORT void		AIEntityMoveToIdlePosition ( int iObjID );
DLLEXPORT void		AISetEntityCollide ( int iObjID, int iObjHit );
DLLEXPORT void		AICreateSound ( float x, float z, int iType, float fSize );
DLLEXPORT void		AICreateSound ( float x, float z, int iType, float fSize, int iContainerID );
DLLEXPORT void		AICreateSound ( float x, float y, float z, int iType, float fSize );
DLLEXPORT void		AICreateSound ( float x, float y, float z, int iType, float fSize, int iContainerID );
DLLEXPORT void		AISetEntityControl ( int iObjID, int iMode );
DLLEXPORT void		AIEntityGoToPosition ( int iObjID, float x, float z );
DLLEXPORT void		AIEntityGoToPosition ( int iObjID, float x, float z, int container );
DLLEXPORT void		AIEntitySearchArea ( int iObjID );
DLLEXPORT int		AIGetEntityCountTargets ( int iObjID );
DLLEXPORT void		AIEntityDefendArea ( int iObjID, float x, float z, float dist, int container );
DLLEXPORT void		AIEntityDefendArea ( int iObjID, float x, float y, float z, float dist, int container );
DLLEXPORT void		AIEntityDefendPoint ( int iObjID, float x, float z );
DLLEXPORT void		AIEntityStop ( int iObjID );
DLLEXPORT void		AIEntityStopNoMoveAddition ( int iObjID );
DLLEXPORT void		AIEntityLookAtPosition ( int iObjID, float x, float z );
DLLEXPORT void		AIEntityLookAround ( int iObjID, float minAng, float maxAng );
DLLEXPORT void		AIEntityRandomMove ( int iObjID, float min, float max );
DLLEXPORT void		AIEntityMoveClose ( int iObjID, float x, float z, float maxDist );
DLLEXPORT int		AIEntityMoveToCover ( int iObjID, float x, float z );
DLLEXPORT void		AIEntityDuck ( int iObjID );
DLLEXPORT void		AIEntityStand ( int iObjID );
DLLEXPORT void		AIEntityStrafeTarget ( int iObjID );
DLLEXPORT void		AIMakeMemblockFromWaypoints ( int iMemblockID, int iContainerID );
DLLEXPORT void		AIMakeWaypointsFromMemblock ( int iContainerID, int iMemblockID );
DLLEXPORT int		AICountWaypoints ( int iContainerID );
DLLEXPORT void		AIAddWaypoint ( int iContainerID, float x, float z );
DLLEXPORT void		AIRemoveWaypoint ( int iContainerID, int iIndex );
DLLEXPORT void		AIUpdateWaypointVisibility ( int iContainerID );
DLLEXPORT void		AIUpdateWaypointVisibility ( int iContainerID, float fLimit );
DLLEXPORT void		AIClearWaypoints ( int iContainerID );
DLLEXPORT void		AISetWaypointCost ( int iContainerID, int iIndex, float fCost );
DLLEXPORT void		AIHideErrors ( );
DLLEXPORT void		AIShowErrors ( );
DLLEXPORT void		AIDebugShowWaypoints ( int iContainerID, float fHeight );
DLLEXPORT void		AIDebugHideWaypoints ( int iContainerID );
DLLEXPORT void		AIDebugShowWaypointEdges ( int iContainerID, float fHeight );
DLLEXPORT void		AIDebugHideWaypointEdges ( int iContainerID );
DLLEXPORT void		AIDebugShowHideObstacleBounds ( int iShowMode, int iContainerID, float fHeight );
DLLEXPORT void		AIDebugShowObstacleBounds ( int iContainerID, float fHeight );
DLLEXPORT void		AIDebugHideObstacleBounds ( int iContainerID );
DLLEXPORT void		AIDebugShowPaths ( float fHeight );
DLLEXPORT void		AIDebugHidePaths ( );
DLLEXPORT void		AIDebugShowAvoidanceAngles ( float fHeight );
DLLEXPORT void		AIDebugHideAvoidanceAngles ( );
DLLEXPORT void		AIDebugShowViewArcs ( float fHeight );
DLLEXPORT void		AIDebugHideViewArcs ( );
DLLEXPORT void		AIDebugShowSounds ( float fHeight );
DLLEXPORT void		AIDebugHideSounds ( );
DLLEXPORT void		AISetConsoleOutputOn ( int iObjID );
DLLEXPORT void		AIChangeConsoleObject ( int iObjID );
DLLEXPORT void		AISetConsoleOutputOff ( );
DLLEXPORT void		AIDebugShowAvoidanceGrid ( int iContainerID, float fHeight );
DLLEXPORT void		AIDebugHideAvoidanceGrid ( int iContainerID );

// new for Reloaded
DLLEXPORT void		AISetEntityDiveSpeedMultiplier ( int iObjID, float speed );
DLLEXPORT void		AISetEntityLeapSpeedMultiplier ( int iObjID, float speed );
DLLEXPORT void		AISetAvoidanceGridRadius ( float size );
DLLEXPORT int		AIGetEntityIsBehindCorner ( int iObjID );
DLLEXPORT void		AISetEntityCanHideBehindCorner ( int iObjID, int mode );
DLLEXPORT void		AISetEntityDiveRange ( int iObjID, float range );
DLLEXPORT int		AIGetEntityIsDiving ( int iObjID );
DLLEXPORT void		AISetEntityCanDive ( int iObjID, int mode );
DLLEXPORT void		AIEntityForceOutOfCover ( int iObjID );
DLLEXPORT void		AISetEntityLeapRange ( int iObjID, float range );
DLLEXPORT int		AIGetEntityIsLeaping ( int iObjID );
DLLEXPORT void		AISetEntityCanLeap ( int iObjID, int mode );
DLLEXPORT void		AISetEntityCanLeap ( int iObjID, int mode );
DLLEXPORT void		AIAddDoor ( int iObjID, int container, float x1, float y1, float x2, float y2 );
DLLEXPORT void		AIRemoveDoor ( int iObjID, int container );