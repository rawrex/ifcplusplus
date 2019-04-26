/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcProperty.h"
#include "ifcpp/IFC4/include/IfcPropertyDependencyRelationship.h"
#include "ifcpp/IFC4/include/IfcText.h"

// ENTITY IfcPropertyDependencyRelationship 
IfcPropertyDependencyRelationship::IfcPropertyDependencyRelationship( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcPropertyDependencyRelationship::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcPropertyDependencyRelationship> copy_self( new IfcPropertyDependencyRelationship() );
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy(options) ); }
	if( m_Description ) { copy_self->m_Description = dynamic_pointer_cast<IfcText>( m_Description->getDeepCopy(options) ); }
	if( m_DependingProperty ) { copy_self->m_DependingProperty = dynamic_pointer_cast<IfcProperty>( m_DependingProperty->getDeepCopy(options) ); }
	if( m_DependantProperty ) { copy_self->m_DependantProperty = dynamic_pointer_cast<IfcProperty>( m_DependantProperty->getDeepCopy(options) ); }
	if( m_Expression ) { copy_self->m_Expression = dynamic_pointer_cast<IfcText>( m_Expression->getDeepCopy(options) ); }
	return copy_self;
}
void IfcPropertyDependencyRelationship::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCPROPERTYDEPENDENCYRELATIONSHIP" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_DependingProperty ) { stream << "#" << m_DependingProperty->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_DependantProperty ) { stream << "#" << m_DependantProperty->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_Expression ) { m_Expression->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcPropertyDependencyRelationship::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcPropertyDependencyRelationship::toString() const { return L"IfcPropertyDependencyRelationship"; }
void IfcPropertyDependencyRelationship::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 5 ){ std::stringstream err; err << "Wrong parameter count for entity IfcPropertyDependencyRelationship, expecting 5, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_Name = IfcLabel::createObjectFromSTEP( args[0], map );
	m_Description = IfcText::createObjectFromSTEP( args[1], map );
	readEntityReference( args[2], m_DependingProperty, map );
	readEntityReference( args[3], m_DependantProperty, map );
	m_Expression = IfcText::createObjectFromSTEP( args[4], map );
}
void IfcPropertyDependencyRelationship::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcResourceLevelRelationship::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "DependingProperty", m_DependingProperty ) );
	vec_attributes.emplace_back( std::make_pair( "DependantProperty", m_DependantProperty ) );
	vec_attributes.emplace_back( std::make_pair( "Expression", m_Expression ) );
}
void IfcPropertyDependencyRelationship::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcResourceLevelRelationship::getAttributesInverse( vec_attributes_inverse );
}
void IfcPropertyDependencyRelationship::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcResourceLevelRelationship::setInverseCounterparts( ptr_self_entity );
	shared_ptr<IfcPropertyDependencyRelationship> ptr_self = dynamic_pointer_cast<IfcPropertyDependencyRelationship>( ptr_self_entity );
	if( !ptr_self ) { throw BuildingException( "IfcPropertyDependencyRelationship::setInverseCounterparts: type mismatch" ); }
	if( m_DependantProperty )
	{
		m_DependantProperty->m_PropertyDependsOn_inverse.emplace_back( ptr_self );
	}
	if( m_DependingProperty )
	{
		m_DependingProperty->m_PropertyForDependance_inverse.emplace_back( ptr_self );
	}
}
void IfcPropertyDependencyRelationship::unlinkFromInverseCounterparts()
{
	IfcResourceLevelRelationship::unlinkFromInverseCounterparts();
	if( m_DependantProperty )
	{
		std::vector<weak_ptr<IfcPropertyDependencyRelationship> >& PropertyDependsOn_inverse = m_DependantProperty->m_PropertyDependsOn_inverse;
		for( auto it_PropertyDependsOn_inverse = PropertyDependsOn_inverse.begin(); it_PropertyDependsOn_inverse != PropertyDependsOn_inverse.end(); )
		{
			weak_ptr<IfcPropertyDependencyRelationship> self_candidate_weak = *it_PropertyDependsOn_inverse;
			if( self_candidate_weak.expired() )
			{
				++it_PropertyDependsOn_inverse;
				continue;
			}
			shared_ptr<IfcPropertyDependencyRelationship> self_candidate( *it_PropertyDependsOn_inverse );
			if( self_candidate.get() == this )
			{
				it_PropertyDependsOn_inverse= PropertyDependsOn_inverse.erase( it_PropertyDependsOn_inverse );
			}
			else
			{
				++it_PropertyDependsOn_inverse;
			}
		}
	}
	if( m_DependingProperty )
	{
		std::vector<weak_ptr<IfcPropertyDependencyRelationship> >& PropertyForDependance_inverse = m_DependingProperty->m_PropertyForDependance_inverse;
		for( auto it_PropertyForDependance_inverse = PropertyForDependance_inverse.begin(); it_PropertyForDependance_inverse != PropertyForDependance_inverse.end(); )
		{
			weak_ptr<IfcPropertyDependencyRelationship> self_candidate_weak = *it_PropertyForDependance_inverse;
			if( self_candidate_weak.expired() )
			{
				++it_PropertyForDependance_inverse;
				continue;
			}
			shared_ptr<IfcPropertyDependencyRelationship> self_candidate( *it_PropertyForDependance_inverse );
			if( self_candidate.get() == this )
			{
				it_PropertyForDependance_inverse= PropertyForDependance_inverse.erase( it_PropertyForDependance_inverse );
			}
			else
			{
				++it_PropertyForDependance_inverse;
			}
		}
	}
}
