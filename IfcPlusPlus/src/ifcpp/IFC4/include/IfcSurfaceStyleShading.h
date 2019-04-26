/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcSurfaceStyleElementSelect.h"
#include "IfcPresentationItem.h"
class IFCQUERY_EXPORT IfcColourRgb;
class IFCQUERY_EXPORT IfcNormalisedRatioMeasure;
//ENTITY
class IFCQUERY_EXPORT IfcSurfaceStyleShading : virtual public IfcSurfaceStyleElementSelect, public IfcPresentationItem
{ 
public:
	IfcSurfaceStyleShading() = default;
	IfcSurfaceStyleShading( int id );
	~IfcSurfaceStyleShading() = default;
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
	virtual size_t getNumAttributes() { return 2; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcSurfaceStyleShading"; }
	virtual const std::wstring toString() const;


	// IfcPresentationItem -----------------------------------------------------------

	// IfcSurfaceStyleShading -----------------------------------------------------------
	// attributes:
	shared_ptr<IfcColourRgb>				m_SurfaceColour;
	shared_ptr<IfcNormalisedRatioMeasure>	m_Transparency;				//optional
};

