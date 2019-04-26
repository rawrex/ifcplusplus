/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcForceMeasure.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcStructuralLoadSingleForceWarping.h"
#include "ifcpp/IFC4/include/IfcTorqueMeasure.h"
#include "ifcpp/IFC4/include/IfcWarpingMomentMeasure.h"

// ENTITY IfcStructuralLoadSingleForceWarping 
IfcStructuralLoadSingleForceWarping::IfcStructuralLoadSingleForceWarping( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcStructuralLoadSingleForceWarping::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcStructuralLoadSingleForceWarping> copy_self( new IfcStructuralLoadSingleForceWarping() );
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy(options) ); }
	if( m_ForceX ) { copy_self->m_ForceX = dynamic_pointer_cast<IfcForceMeasure>( m_ForceX->getDeepCopy(options) ); }
	if( m_ForceY ) { copy_self->m_ForceY = dynamic_pointer_cast<IfcForceMeasure>( m_ForceY->getDeepCopy(options) ); }
	if( m_ForceZ ) { copy_self->m_ForceZ = dynamic_pointer_cast<IfcForceMeasure>( m_ForceZ->getDeepCopy(options) ); }
	if( m_MomentX ) { copy_self->m_MomentX = dynamic_pointer_cast<IfcTorqueMeasure>( m_MomentX->getDeepCopy(options) ); }
	if( m_MomentY ) { copy_self->m_MomentY = dynamic_pointer_cast<IfcTorqueMeasure>( m_MomentY->getDeepCopy(options) ); }
	if( m_MomentZ ) { copy_self->m_MomentZ = dynamic_pointer_cast<IfcTorqueMeasure>( m_MomentZ->getDeepCopy(options) ); }
	if( m_WarpingMoment ) { copy_self->m_WarpingMoment = dynamic_pointer_cast<IfcWarpingMomentMeasure>( m_WarpingMoment->getDeepCopy(options) ); }
	return copy_self;
}
void IfcStructuralLoadSingleForceWarping::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCSTRUCTURALLOADSINGLEFORCEWARPING" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ForceX ) { m_ForceX->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ForceY ) { m_ForceY->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ForceZ ) { m_ForceZ->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_MomentX ) { m_MomentX->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_MomentY ) { m_MomentY->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_MomentZ ) { m_MomentZ->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_WarpingMoment ) { m_WarpingMoment->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcStructuralLoadSingleForceWarping::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcStructuralLoadSingleForceWarping::toString() const { return L"IfcStructuralLoadSingleForceWarping"; }
void IfcStructuralLoadSingleForceWarping::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 8 ){ std::stringstream err; err << "Wrong parameter count for entity IfcStructuralLoadSingleForceWarping, expecting 8, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_Name = IfcLabel::createObjectFromSTEP( args[0], map );
	m_ForceX = IfcForceMeasure::createObjectFromSTEP( args[1], map );
	m_ForceY = IfcForceMeasure::createObjectFromSTEP( args[2], map );
	m_ForceZ = IfcForceMeasure::createObjectFromSTEP( args[3], map );
	m_MomentX = IfcTorqueMeasure::createObjectFromSTEP( args[4], map );
	m_MomentY = IfcTorqueMeasure::createObjectFromSTEP( args[5], map );
	m_MomentZ = IfcTorqueMeasure::createObjectFromSTEP( args[6], map );
	m_WarpingMoment = IfcWarpingMomentMeasure::createObjectFromSTEP( args[7], map );
}
void IfcStructuralLoadSingleForceWarping::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcStructuralLoadSingleForce::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "WarpingMoment", m_WarpingMoment ) );
}
void IfcStructuralLoadSingleForceWarping::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcStructuralLoadSingleForce::getAttributesInverse( vec_attributes_inverse );
}
void IfcStructuralLoadSingleForceWarping::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcStructuralLoadSingleForce::setInverseCounterparts( ptr_self_entity );
}
void IfcStructuralLoadSingleForceWarping::unlinkFromInverseCounterparts()
{
	IfcStructuralLoadSingleForce::unlinkFromInverseCounterparts();
}
