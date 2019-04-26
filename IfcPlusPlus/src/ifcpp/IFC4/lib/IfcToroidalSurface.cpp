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
#include "ifcpp/IFC4/include/IfcStyledItem.h"
#include "ifcpp/IFC4/include/IfcToroidalSurface.h"

// ENTITY IfcToroidalSurface 
IfcToroidalSurface::IfcToroidalSurface( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcToroidalSurface::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcToroidalSurface> copy_self( new IfcToroidalSurface() );
	if( m_Position ) { copy_self->m_Position = dynamic_pointer_cast<IfcAxis2Placement3D>( m_Position->getDeepCopy(options) ); }
	if( m_MajorRadius ) { copy_self->m_MajorRadius = dynamic_pointer_cast<IfcPositiveLengthMeasure>( m_MajorRadius->getDeepCopy(options) ); }
	if( m_MinorRadius ) { copy_self->m_MinorRadius = dynamic_pointer_cast<IfcPositiveLengthMeasure>( m_MinorRadius->getDeepCopy(options) ); }
	return copy_self;
}
void IfcToroidalSurface::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCTOROIDALSURFACE" << "(";
	if( m_Position ) { stream << "#" << m_Position->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_MajorRadius ) { m_MajorRadius->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_MinorRadius ) { m_MinorRadius->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcToroidalSurface::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcToroidalSurface::toString() const { return L"IfcToroidalSurface"; }
void IfcToroidalSurface::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 3 ){ std::stringstream err; err << "Wrong parameter count for entity IfcToroidalSurface, expecting 3, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	readEntityReference( args[0], m_Position, map );
	m_MajorRadius = IfcPositiveLengthMeasure::createObjectFromSTEP( args[1], map );
	m_MinorRadius = IfcPositiveLengthMeasure::createObjectFromSTEP( args[2], map );
}
void IfcToroidalSurface::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcElementarySurface::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "MajorRadius", m_MajorRadius ) );
	vec_attributes.emplace_back( std::make_pair( "MinorRadius", m_MinorRadius ) );
}
void IfcToroidalSurface::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcElementarySurface::getAttributesInverse( vec_attributes_inverse );
}
void IfcToroidalSurface::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcElementarySurface::setInverseCounterparts( ptr_self_entity );
}
void IfcToroidalSurface::unlinkFromInverseCounterparts()
{
	IfcElementarySurface::unlinkFromInverseCounterparts();
}
