#include "SolidEditCutCommand.h"
#include "SolidDesignerCommands.h"
#include "AliceIOperation.h"

using namespace sdr;
using namespace alice;

sdr::SolidEditCutCommand::SolidEditCutCommand() noexcept
	: AppCommandBase(std::string(Cmd::EDIT_CUT))
{

}

sdr::SolidEditCutCommand::~SolidEditCutCommand()
{

}

bool SolidEditCutCommand::IsSupported() const
{
	return false;
}

bool SolidEditCutCommand::IsVisible() const
{
	return false;
}

bool SolidEditCutCommand::IsEnabled() const
{
	return false;
}

std::string SolidEditCutCommand::DisabledReason() const
{
	return {};
}

std::unique_ptr<alice::IOperation> SolidEditCutCommand::Execute(const alice::CommandParameter& param)
{
	return nullptr;
}