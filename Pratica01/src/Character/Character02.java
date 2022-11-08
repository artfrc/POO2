package Character;
import AttackMedium;
import JumpHigh;
import RunFast;

public class Character02 extends Character{

	public Character02() {

		setJump(new JumpHigh());
		setRun(new RunFast());
		setAttack(new AttackMedium());
		
	}

	
}
