// rankd.c
// music 12.13

#include <ansi.h>

string query_rank(object ob)
{
	if( ob->is_ghost() ) return HIB "�� �»�Ұ�� ��" NOR;
// New rank 
  if(wizardp(ob)) return HIY"�� ��Ѫ�ػ��� ��"NOR;
    if(!ob->query("mingwang"))  ob->set("mingwang",0);

    if(ob->query("mingwang")> 1000000) return HIW "�� ����̩�� ��" NOR;        
    if(ob->query("mingwang")> 100000) return HIW "�� �������� ��" NOR;
    if(ob->query("mingwang")> 10000) return HIW "�� ����һʱ ��" NOR;
    if(ob->query("mingwang")> 1000) return HIW "�� �������� ��" NOR;
    if(ob->query("mingwang")> 100) return HIW "�� С������ ��" NOR;
    if(ob->query("mingwang")> 10) return HIW "�� �������� ��" NOR;

    if(ob->query("mingwang")< -1000000) return HIY "�� ����ħͷ ��" NOR;
    if(ob->query("mingwang")< -100000) return HIY "�� �������� ��" NOR;
    if(ob->query("mingwang")< -10000) return HIY "�� ���һ�� ��" NOR;
    if(ob->query("mingwang")< -1000) return HIY "�� ����Զ�� ��" NOR;
    if(ob->query("mingwang")< -100) return HIY "�� С�ж��� ��" NOR;
    if(ob->query("mingwang")< -10) return HIY "�� �����; ��" NOR;
    return  "�� ���뽭�� ��" NOR;

	switch(ob->query("gender")) {
	case "Ů��":
		switch(wizhood(ob)) {
			case "(admin)":		return HIW "�� ��  Ů ��" NOR;
			case "(arch)":		return HIY "�� Ů  �� ��" NOR;
			case "(wizard)":	return HIG "�� ��  Ů ��" NOR;
			case "(apprentice)":	return HIC "�� С��Ů ��" NOR;
			case "(immortal)":	return HIC "�� Ů��ͯ ��" NOR;
			default:
				if( ((int)ob->query("PKS") > 100) &&
		        ((int)ob->query("PKS") > (int)ob->query("MKS")) )
					return "�� Ůħͷ ��";
				switch(ob->query("class")) {
//					case "bonze":		return "�� ��  �� ��";
//					case "taoist":		return "�� Ů  �� ��";
//					case "bandit":		return "�� Ů���� ��";
//					case "dancer":		return "�� ��  �� ��";
//					case "scholar":		return "�� ��  Ů ��";
//					case "officer":		return "�� Ů  �� ��";
//					case "fighter":		return "�� Ů���� ��";
//					case "swordsman":	return "�� Ů��ʿ ��";
//					case "alchemist":	return "�� ��  ʿ ��";
//					case "shaman":		return "�� ��  ҽ ��";
//					case "beggar":		return "�� �л��� ��";
                   case "heshang":     return "�� ��  �� ��";
                   case "nigu":        return "�� ��  �� ��";
                   case "daoshi":      return "�� ��  ʿ ��";
                   case "jianke":      return "�� ��  �� ��";
                   case "shusheng":    return "�� ��  �� ��";
                   case "langzi":      return "�� ��  �� ��";
                   case "youxia":      return "�� ��  �� ��";
                   case "shashou":     return "�� ɱ  �� ��";
                   case "jiaohua":     return "�� ��  �� ��";
                   case "xiake":       return "�� ��  �� ��";
                   default:            return "�� ƽ  �� ��";

			}
		}
	default:
                if(ob->query("id")=="musix")    return  "�� ��  �� ��" ;
                if(ob->query("id")=="wsong")    return  "�� ��  �� ��" ;
		switch(wizhood(ob)) {
                       
			case "(admin)":		return  "�� ��  �� ��" ;
			case "(arch)":		return HIY "�� ��  �� ��" NOR;
			case "(wizard)":	return HIG "�� ��  �� ��" NOR;
			case "(apprentice)":	return HIC "�� С���� ��" NOR;
			case "(immortal)":	return HIC "�� С��ͯ ��" NOR;
			default:
				if( ((int)ob->query("PKS") > 100) &&
					((int)ob->query("PKS") > (int)ob->query("MKS")) )
					return "�� ��ħͷ ��";
				switch(ob->query("class")) {
//					case "bonze":		return "�� ɮ  �� ��";
//					case "taoist":		return "�� ��  ʿ ��";
//					case "bandit":		return "�� ��  �� ��";
//					case "scholar":		return "�� ��  �� ��";
//					case "officer":		return "�� ��  �� ��";
//					case "fighter":		return "�� ��  �� ��";
//					case "swordsman":	return "�� ��  ʿ ��";
//					case "alchemist":	return "�� ��  ʿ ��";
//					case "shaman":		return "�� ��  ҽ ��";
//					case "beggar":		return "�� �л��� ��";

                   case "heshang":     return "�� ��  �� ��";
                   case "nigu":        return "�� ��  �� ��";         
                   case "daoshi":      return "�� ��  ʿ ��";
                   case "jianke":      return "�� ��  �� ��";
                   case "shusheng":    return "�� ��  �� ��";
                   case "langzi":      return "�� ��  �� ��";
                   case "youxia":      return "�� ��  �� ��";
                   case "shashou":     return "�� ɱ  �� ��";
                   case "jiaohua":     return "�� ��  �� ��";
                   case "xiake":       return "�� ��  �� ��";
		   default:            return "�� ƽ  �� ��";
			}
		}
	}
}

string query_respect(object ob)
{
	int age;
	string str;

	if( stringp(str = ob->query("rank_info/respect")) )
		return str;

	age = ob->query("age");
	switch(ob->query("gender")) {
		case "Ů��":
			switch(ob->query("class")) {
			case "nigu":
				if( age < 18 ) return "Сʦ̫";
				else return "ʦ̫";
				break;
			case "daoshi":
				if( age < 18 ) return "С�ɹ�";
				else return "�ɹ�";
				break;
			default:
				if( age < 18 ) return "С����";
				else if( age < 50 ) return "����";
				else return "����";
				break;
			}
		case "����":
		default:
			switch(ob->query("class")) {
			case "heshang":
				if( age < 18 ) return "Сʦ��";
				else return "��ʦ";
				break;
			case "daoshi":
				if( age < 18 ) return "����";
				else return "����";
				break;
			// case "fighter":
                        case "langzi":
                                if( age < 18 ) return "С��";
                                else if( age < 50 ) return "��̨";
                                else return "ǰ��";
                                break;
                        case "xiake":
			case "jianke":
				if( age < 18 ) return "С�ϵ�";
				else if( age < 50 ) return "׳ʿ";
				else return "��ǰ��";
				break;
			default:
				if( age < 20 ) return "С�ֵ�";
				else if( age < 50 ) return "׳ʿ";
				else return "��ү��";
				break;
			}
	}
}

string query_rude(object ob)
{
	int age;
	string str;

	if( stringp(str = ob->query("rank_info/rude")) )
		return str;

	age = ob->query("age");
	switch(ob->query("gender")) {
		case "Ů��":
			switch(ob->query("class")) {
			case "nigu":
				return "����";
				break;
			case "daoshi":
				return "��Ů";
				break;
			default:
				if( age < 30 ) return "С����";
				else return "����̫��";
				break;
			}
		case "����":
		default:
			switch(ob->query("class")) {
			case "heshang":
				if( age < 50 ) return "��ͺ¿";
				else return "��ͺ¿";
				break;
			case "daoshi":
				return "��ţ����";
				break;
			default:
				if( age < 20 ) return "С���˵�";
				if( age < 50 ) return "����";
				else return "��ƥ��";
				break;
			}
	}
}

string query_self(object ob)
{
	int age;
	string str;

	if( stringp(str = ob->query("rank_info/self")) )
		return str;

	age = ob->query("age");
	switch(ob->query("gender")) {
		case "Ů��":
			switch(ob->query("class")) {
			case "nigu":
				if( age < 50 ) return "ƶ��";
				else return "����";
				break;
			default:
				if( age < 30 ) return "СŮ��";
				else return "���";
				break;
			}
		case "����":
		default:
			switch(ob->query("class")) {
			case "heshang":
				if( age < 50 ) return "ƶɮ";
				else return "����";
				break;
			case "daoshi":
				return "ƶ��";
				break;
			default:
				if( age < 50 ) return "����";
				else return "��ͷ��";
				break;
			}
	}
}

string query_self_rude(object ob)
{
	int age;
	string str;

	if( stringp(str = ob->query("rank_info/self_rude")) )
		return str;

	age = ob->query("age");
	switch(ob->query("gender")) {
		case "Ů��":
			switch(ob->query("class")) {
			case "nigu":
				if( age < 50 ) return "ƶ��";
				else return "����";
				break;
			default:
				if( age < 30 ) return "������";
				else return "����";
				break;
			}
		case "����":
		default:
			switch(ob->query("class")) {
			case "heshang":
				if( age < 50 ) return "������";
				else return "�Ϻ�����";
				break;
			case "daoshi":
				return "��ɽ��";
				break;
			default:
				if( age < 50 ) return "��ү��";
				else return "����";
				break;
			}
	}
}

//write by Huang (11/02/96)
string query_guanxi(object me,object target)
{
	int me_age,target_age;
	string str;

        if( stringp(str = me->query("rank_info/guanxi")) )
                return str;

        me_age = me->query("age");
	if ( stringp(str = target->query("rank_info/guanxi")) )
		return str;
	target_age = target->query("age");

	switch(me->query("gender")) {
		case "Ů��":
			if (me_age > target_age) return "��";
			else return "����";
			break;
		case "����":
                        if (me_age > target_age) return "���";
                        else return "�ܵ�";
                        break;
		default:
			return "����";
			break;
	}
}

string query_self_guanxi(object me,object target)
{
        int me_age,target_age;
        string str;

        if( stringp(str = me->query("rank_info/self_guanxi")) )
                return str;

        me_age = me->query("age");
        if ( stringp(str = target->query("rank_info/self_guanxi")) )
                return str;
        target_age = target->query("age");

        switch(target->query("gender")) {
                case "Ů��":
                        if (me_age <= target_age) return "���";
                        else return "����";
                        break;
                case "����":
                        if (me_age <= target_age) return "���";
                        else return "�ܵ�";
                        break;
                default:
                        return "����";
                        break;
        }
}
