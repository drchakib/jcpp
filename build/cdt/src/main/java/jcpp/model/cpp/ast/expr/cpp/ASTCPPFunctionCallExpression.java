package jcpp.model.cpp.ast.expr.cpp;

import jcpp.model.cpp.ast.expr.*;
import jcpp.model.cpp.ast.*;
import jcpp.model.cpp.ast.name.*;
import jcpp.model.cpp.ast.expr.init.*;
import java.util.*;
import org.eclipse.cdt.core.dom.ast.*;
import org.eclipse.cdt.core.dom.ast.cpp.*;
import javax.xml.bind.annotation.*;

@XmlRootElement
@XmlAccessorType(XmlAccessType.FIELD)
public class ASTCPPFunctionCallExpression extends ASTFunctionCallExpression{
	@XmlElementRef
	@XmlElementWrapper
	private List<ASTImplicitName> implicitNames;

	public ASTCPPFunctionCallExpression(ICPPASTFunctionCallExpression expr) throws Exception{
		super(expr);
		implicitNames=new ArrayList<ASTImplicitName>();
		if (expr.getImplicitNames()!=null){
			for (IASTImplicitName n : expr.getImplicitNames()){
				implicitNames.add((ASTImplicitName)ASTNameFactory.create(n));
			}
		}
	}

	public ASTCPPFunctionCallExpression(){
		implicitNames=new ArrayList<ASTImplicitName>();
	}

	public List<ASTImplicitName> getImplicitNames(){
		return implicitNames;
	}

	public void addImplicitName(ASTImplicitName n){
		implicitNames.add(n);
	}
}