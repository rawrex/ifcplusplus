/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcAxis2Placement3D.h"
#include "ifcpp/IFC4/include/IfcPositiveLengthMeasure.h"
#include "ifcpp/IFC4/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4/include/IfcSphere.h"
#include "ifcpp/IFC4/include/IfcStyledItem.h"

// ENTITY IfcSphere 
IfcSphere::IfcSphere( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcSphere::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcSphere> copy_self( new IfcSphere() );
	if( m_Position ) { copy_self->m_Position = dynamic_pointer_cast<IfcAxis2Placement3D>( m_Position->getDeepCopy(options) ); }
	if( m_Radius ) { copy_self->m_Radius = dynamic_pointer_cast<IfcPositiveLengthMeasure>( m_Radius->getDeepCopy(options) ); }
	return copy_self;
}
void IfcSphere::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCSPHERE" << "(";
	if( m_Position ) { stream << "#" << m_Position->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_Radius ) { m_Radius->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcSphere::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcSphere::toString() const { return L"IfcSphere"; }
void IfcSphere::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 2 ){ std::stringstream err; err << "Wrong parameter count for entity IfcSphere, expecting 2, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	readEntityReference( args[0], m_Position, map );
	m_Radius = IfcPositiveLengthMeasure::createObjectFromSTEP( args[1], map );
}
void IfcSphere::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcCsgPrimitive3D::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "Radius", m_Radius ) );
}
void IfcSphere::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcCsgPrimitive3D::getAttributesInverse( vec_attributes_inverse );
}
void IfcSphere::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcCsgPrimitive3D::setInverseCounterparts( ptr_self_entity );
}
void IfcSphere::unlinkFromInverseCounterparts()
{
	IfcCsgPrimitive3D::unlinkFromInverseCounterparts();
}
