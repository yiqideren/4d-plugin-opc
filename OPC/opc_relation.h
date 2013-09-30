/* --------------------------------------------------------------------------------
 #
 #	4DPlugin.h
 #	source generated by 4D Plugin Wizard
 #	Project : OPC
 #	author : miyako
 #	2013/09/29
 #
 # --------------------------------------------------------------------------------*/

#include "4DPluginAPI.h"

#include "opc_constants.h"

// --- OPC Relation
void OPC_Create_relation(sLONG_PTR *pResult, PackagePtr pParams);
void OPC_Remove_relation(sLONG_PTR *pResult, PackagePtr pParams);
void OPC_Create_external_relation(sLONG_PTR *pResult, PackagePtr pParams);
void OPC_RELATION_LIST(sLONG_PTR *pResult, PackagePtr pParams);