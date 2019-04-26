/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcSweptAreaSolid.h"
class IFCQUERY_EXPORT IfcCurve;
class IFCQUERY_EXPORT IfcParameterValue;
class IFCQUERY_EXPORT IfcDirection;
//ENTITY
class IFCQUERY_EXPORT IfcFixedReferenceSweptAreaSolid : public IfcSweptAreaSolid
{ 
public:
	IfcFixedReferenceSweptAreaSolid() = default;
	IfcFixedReferenceSweptAreaSolid( int id );
	~IfcFixedReferenceSweptAreaSolid() = default;
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
	virtual size_t getNumAttributes() { return 6; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcFixedReferenceSweptAreaSolid"; }
	virtual const std::wstring toString() const;


	// IfcRepresentationItem -----------------------------------------------------------
	// inverse attributes:
	//  std::vector<weak_ptr<IfcPresentationLayerAssignment> >	m_LayerAssignment_inverse;
	//  std::vector<weak_ptr<IfcStyledItem> >					m_StyledByItem_inverse;

	// IfcGeometricRepresentationItem -----------------------------------------------------------

	// IfcSolidModel -----------------------------------------------------------

	// IfcSweptAreaSolid -----------------------------------------------------------
	// attributes:
	//  shared_ptr<IfcProfileDef>								m_SweptArea;
	//  shared_ptr<IfcAxis2Placement3D>							m_Position;					//optional

	// IfcFixedReferenceSweptAreaSolid -----------------------------------------------------------
	// attributes:
	shared_ptr<IfcCurve>									m_Directrix;
	shared_ptr<IfcParameterValue>							m_StartParam;				//optional
	shared_ptr<IfcParameterValue>							m_EndParam;					//optional
	shared_ptr<IfcDirection>								m_FixedReference;
};

