/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcGloballyUniqueId.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcOwnerHistory.h"
#include "ifcpp/IFC4/include/IfcPermeableCoveringOperationEnum.h"
#include "ifcpp/IFC4/include/IfcPermeableCoveringProperties.h"
#include "ifcpp/IFC4/include/IfcPositiveLengthMeasure.h"
#include "ifcpp/IFC4/include/IfcRelAssociates.h"
#include "ifcpp/IFC4/include/IfcRelDeclares.h"
#include "ifcpp/IFC4/include/IfcRelDefinesByProperties.h"
#include "ifcpp/IFC4/include/IfcRelDefinesByTemplate.h"
#include "ifcpp/IFC4/include/IfcShapeAspect.h"
#include "ifcpp/IFC4/include/IfcText.h"
#include "ifcpp/IFC4/include/IfcTypeObject.h"
#include "ifcpp/IFC4/include/IfcWindowPanelPositionEnum.h"

// ENTITY IfcPermeableCoveringProperties 
IfcPermeableCoveringProperties::IfcPermeableCoveringProperties( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcPermeableCoveringProperties::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcPermeableCoveringProperties> copy_self( new IfcPermeableCoveringProperties() );
	if( m_GlobalId )
	{
		if( options.create_new_IfcGloballyUniqueId ) { copy_self->m_GlobalId = make_shared<IfcGloballyUniqueId>( createBase64Uuid<wchar_t>().data() ); }
		else { copy_self->m_GlobalId = dynamic_pointer_cast<IfcGloballyUniqueId>( m_GlobalId->getDeepCopy(options) ); }
	}
	if( m_OwnerHistory )
	{
		if( options.shallow_copy_IfcOwnerHistory ) { copy_self->m_OwnerHistory = m_OwnerHistory; }
		else { copy_self->m_OwnerHistory = dynamic_pointer_cast<IfcOwnerHistory>( m_OwnerHistory->getDeepCopy(options) ); }
	}
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy(options) ); }
	if( m_Description ) { copy_self->m_Description = dynamic_pointer_cast<IfcText>( m_Description->getDeepCopy(options) ); }
	if( m_OperationType ) { copy_self->m_OperationType = dynamic_pointer_cast<IfcPermeableCoveringOperationEnum>( m_OperationType->getDeepCopy(options) ); }
	if( m_PanelPosition ) { copy_self->m_PanelPosition = dynamic_pointer_cast<IfcWindowPanelPositionEnum>( m_PanelPosition->getDeepCopy(options) ); }
	if( m_FrameDepth ) { copy_self->m_FrameDepth = dynamic_pointer_cast<IfcPositiveLengthMeasure>( m_FrameDepth->getDeepCopy(options) ); }
	if( m_FrameThickness ) { copy_self->m_FrameThickness = dynamic_pointer_cast<IfcPositiveLengthMeasure>( m_FrameThickness->getDeepCopy(options) ); }
	if( m_ShapeAspectStyle ) { copy_self->m_ShapeAspectStyle = dynamic_pointer_cast<IfcShapeAspect>( m_ShapeAspectStyle->getDeepCopy(options) ); }
	return copy_self;
}
void IfcPermeableCoveringProperties::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCPERMEABLECOVERINGPROPERTIES" << "(";
	if( m_GlobalId ) { m_GlobalId->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_OperationType ) { m_OperationType->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_PanelPosition ) { m_PanelPosition->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_FrameDepth ) { m_FrameDepth->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_FrameThickness ) { m_FrameThickness->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ShapeAspectStyle ) { stream << "#" << m_ShapeAspectStyle->m_entity_id; } else { stream << "$"; }
	stream << ");";
}
void IfcPermeableCoveringProperties::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcPermeableCoveringProperties::toString() const { return L"IfcPermeableCoveringProperties"; }
void IfcPermeableCoveringProperties::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 9 ){ std::stringstream err; err << "Wrong parameter count for entity IfcPermeableCoveringProperties, expecting 9, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_GlobalId = IfcGloballyUniqueId::createObjectFromSTEP( args[0], map );
	readEntityReference( args[1], m_OwnerHistory, map );
	m_Name = IfcLabel::createObjectFromSTEP( args[2], map );
	m_Description = IfcText::createObjectFromSTEP( args[3], map );
	m_OperationType = IfcPermeableCoveringOperationEnum::createObjectFromSTEP( args[4], map );
	m_PanelPosition = IfcWindowPanelPositionEnum::createObjectFromSTEP( args[5], map );
	m_FrameDepth = IfcPositiveLengthMeasure::createObjectFromSTEP( args[6], map );
	m_FrameThickness = IfcPositiveLengthMeasure::createObjectFromSTEP( args[7], map );
	readEntityReference( args[8], m_ShapeAspectStyle, map );
}
void IfcPermeableCoveringProperties::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcPreDefinedPropertySet::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "OperationType", m_OperationType ) );
	vec_attributes.emplace_back( std::make_pair( "PanelPosition", m_PanelPosition ) );
	vec_attributes.emplace_back( std::make_pair( "FrameDepth", m_FrameDepth ) );
	vec_attributes.emplace_back( std::make_pair( "FrameThickness", m_FrameThickness ) );
	vec_attributes.emplace_back( std::make_pair( "ShapeAspectStyle", m_ShapeAspectStyle ) );
}
void IfcPermeableCoveringProperties::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcPreDefinedPropertySet::getAttributesInverse( vec_attributes_inverse );
}
void IfcPermeableCoveringProperties::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcPreDefinedPropertySet::setInverseCounterparts( ptr_self_entity );
}
void IfcPermeableCoveringProperties::unlinkFromInverseCounterparts()
{
	IfcPreDefinedPropertySet::unlinkFromInverseCounterparts();
}
