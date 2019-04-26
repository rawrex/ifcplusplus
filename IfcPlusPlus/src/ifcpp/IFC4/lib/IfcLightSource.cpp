/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcColourRgb.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcLightSource.h"
#include "ifcpp/IFC4/include/IfcNormalisedRatioMeasure.h"
#include "ifcpp/IFC4/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4/include/IfcStyledItem.h"

// ENTITY IfcLightSource 
IfcLightSource::IfcLightSource( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcLightSource::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcLightSource> copy_self( new IfcLightSource() );
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy(options) ); }
	if( m_LightColour ) { copy_self->m_LightColour = dynamic_pointer_cast<IfcColourRgb>( m_LightColour->getDeepCopy(options) ); }
	if( m_AmbientIntensity ) { copy_self->m_AmbientIntensity = dynamic_pointer_cast<IfcNormalisedRatioMeasure>( m_AmbientIntensity->getDeepCopy(options) ); }
	if( m_Intensity ) { copy_self->m_Intensity = dynamic_pointer_cast<IfcNormalisedRatioMeasure>( m_Intensity->getDeepCopy(options) ); }
	return copy_self;
}
void IfcLightSource::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCLIGHTSOURCE" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_LightColour ) { stream << "#" << m_LightColour->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_AmbientIntensity ) { m_AmbientIntensity->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Intensity ) { m_Intensity->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcLightSource::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcLightSource::toString() const { return L"IfcLightSource"; }
void IfcLightSource::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 4 ){ std::stringstream err; err << "Wrong parameter count for entity IfcLightSource, expecting 4, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_Name = IfcLabel::createObjectFromSTEP( args[0], map );
	readEntityReference( args[1], m_LightColour, map );
	m_AmbientIntensity = IfcNormalisedRatioMeasure::createObjectFromSTEP( args[2], map );
	m_Intensity = IfcNormalisedRatioMeasure::createObjectFromSTEP( args[3], map );
}
void IfcLightSource::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcGeometricRepresentationItem::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "Name", m_Name ) );
	vec_attributes.emplace_back( std::make_pair( "LightColour", m_LightColour ) );
	vec_attributes.emplace_back( std::make_pair( "AmbientIntensity", m_AmbientIntensity ) );
	vec_attributes.emplace_back( std::make_pair( "Intensity", m_Intensity ) );
}
void IfcLightSource::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcGeometricRepresentationItem::getAttributesInverse( vec_attributes_inverse );
}
void IfcLightSource::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcGeometricRepresentationItem::setInverseCounterparts( ptr_self_entity );
}
void IfcLightSource::unlinkFromInverseCounterparts()
{
	IfcGeometricRepresentationItem::unlinkFromInverseCounterparts();
}
