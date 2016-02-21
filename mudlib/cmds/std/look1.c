// look.c

#include <room.h>
#include <ansi.h>

inherit F_CLEAN_UP;

int look_room(object me, object env);
int look_item(object me, object obj);
int look_living(object me, object obj);
int look_room_item(object me, string arg);
string getper(object me, object obj);

void create() { seteuid(getuid()); }

int main(object me, string arg)
{
        object obj;
        int result;

        if( !arg ) result = look_room(me, environment(me));
        else if( (obj = present(arg, me)) || (obj = present(arg, environment(me)))) {
                if( obj->is_character() ) result = look_living(me, obj);
                else result = look_item(me, obj);
        } else result = look_room_item(me, arg);

        return result;
}

int look_room(object me, object env)
{
        int i;
        object *inv;
        mapping exits;
        string str, *dirs;

        if( !env ) {
                write("������ܻ����ɵ�һƬ��ʲ��Ҳû�С�\n");
                return 1;
        }
        switch (NATURE_D->outdoor_room_outcolor())
        {
              case "BLK":
        str = sprintf( HIC + "%s" + NOR + " - %s\n    %s" + BLK + "%s" + NOR,
                env->query("short"),
                wizardp(me)? file_name(env): "",
                env->query("long"),
                env->query("outdoors")? NATURE_D->outdoor_room_description():"");
                   break;
              case "RED":
        str = sprintf( HIC + "%s" + NOR + " - %s\n    %s" + RED + "%s" + NOR,
                env->query("short"),
                wizardp(me)? file_name(env): "",
                env->query("long"),
                env->query("outdoors")? NATURE_D->outdoor_room_description():"");
                   break;
              case "HIR":
        str = sprintf( HIC + "%s" + NOR + " - %s\n    %s" + HIR + "%s" + NOR,
                env->query("short"),
                wizardp(me)? file_name(env): "",
                env->query("long"),
                env->query("outdoors")? NATURE_D->outdoor_room_description():"");
                   break;
              case "GRN":
        str = sprintf( HIC + "%s" + NOR + " - %s\n    %s" + GRN + "%s" + NOR,
                env->query("short"),
                wizardp(me)? file_name(env): "",
                env->query("long"),
                env->query("outdoors")? NATURE_D->outdoor_room_description():"");
                   break;
              case "HIG":
        str = sprintf( HIC + "%s" + NOR + " - %s\n    %s" + HIG + "%s" + NOR,
                env->query("short"),
                wizardp(me)? file_name(env): "",
                env->query("long"),
                env->query("outdoors")? NATURE_D->outdoor_room_description():"");
                   break;
              case "YEL":
        str = sprintf( HIC + "%s" + NOR + " - %s\n    %s" + YEL + "%s" + NOR,
                env->query("short"),
                wizardp(me)? file_name(env): "",
                env->query("long"),
                env->query("outdoors")? NATURE_D->outdoor_room_description():"");
                   break;
              case "HIY":
        str = sprintf( HIC + "%s" + NOR + " - %s\n    %s" + HIY + "%s" + NOR,
                env->query("short"),
                wizardp(me)? file_name(env): "",
                env->query("long"),
                env->query("outdoors")? NATURE_D->outdoor_room_description():"");
                   break;
              case "BLU":
        str = sprintf( HIC + "%s" + NOR + " - %s\n    %s" + BLU + "%s" + NOR,
                env->query("short"),
                wizardp(me)? file_name(env): "",
                env->query("long"),
                env->query("outdoors")? NATURE_D->outdoor_room_description():"");
                   break;
              case "HIB":
        str = sprintf( HIC + "%s" + NOR + " - %s\n    %s" + HIB + "%s" + NOR,
                env->query("short"),
                wizardp(me)? file_name(env): "",
                env->query("long"),
                env->query("outdoors")? NATURE_D->outdoor_room_description():"");
                   break;
              case "MAG":
        str = sprintf( HIC + "%s" + NOR + " - %s\n    %s" + MAG + "%s" + NOR,
                env->query("short"),
                wizardp(me)? file_name(env): "",
                env->query("long"),
                env->query("outdoors")? NATURE_D->outdoor_room_description():"");
                   break;
              case "HIM":
        str = sprintf( HIC + "%s" + NOR + " - %s\n    %s" + HIM + "%s" + NOR,
                env->query("short"),
                wizardp(me)? file_name(env): "",
                env->query("long"),
                env->query("outdoors")? NATURE_D->outdoor_room_description():"");
                   break;
              case "CYN":
        str = sprintf( HIC + "%s" + NOR + " - %s\n    %s" + CYN + "%s" + NOR,
                env->query("short"),
                wizardp(me)? file_name(env): "",
                env->query("long"),
                env->query("outdoors")? NATURE_D->outdoor_room_description():"");
                   break;
              case "HIC":
        str = sprintf( HIC + "%s" + NOR + " - %s\n    %s" + HIC + "%s" + NOR,
                env->query("short"),
                wizardp(me)? file_name(env): "",
                env->query("long"),
                env->query("outdoors")? NATURE_D->outdoor_room_description():"");
                   break;
              case "WHT":
        str = sprintf( HIC + "%s" + NOR + " - %s\n    %s" + WHT + "%s" + NOR,
                env->query("short"),
                wizardp(me)? file_name(env): "",
                env->query("long"),
                env->query("outdoors")? NATURE_D->outdoor_room_description():"");
                   break;
              case "HIW":
        str = sprintf( HIC + "%s" + NOR + " - %s\n    %s" + HIW + "%s" + NOR,
                env->query("short"),
                wizardp(me)? file_name(env): "",
                env->query("long"),
                env->query("outdoors")? NATURE_D->outdoor_room_description():"");
                   break;
              default:
        str = sprintf( HIC + "%s" + NOR + " - %s\n    %s" + HIG + "%s" + NOR,
                env->query("short"),
                wizardp(me)? file_name(env): "",
                env->query("long"),
                env->query("outdoors")? NATURE_D->outdoor_room_description():"");
                   break;
	}
//        str = sprintf( "%s - %s\n    %s%s",
//                env->query("short"),
//                wizardp(me)? file_name(env): "",
//                env->query("long"),
//                env->query("outdoors")? NATURE_D->outdoor_room_description() : "" );

        if( mapp(exits = env->query("exits")) ) {
                dirs = keys(exits);
                for(i=0; i<sizeof(dirs); i++)
                        if( (int)env->query_door(dirs[i], "status") & DOOR_CLOSED )
                                dirs[i] = 0;
                dirs -= ({ 0 });
                if( sizeof(dirs)==0 )
                        str += "    ����û���κ����Եĳ�·��\n";
                else if( sizeof(dirs)==1 )
                        str += "    ����Ψһ�ĳ����� " + BOLD + dirs[0] + NOR + "��\n";
                else
                        str += sprintf("    �������Եĳ����� " + BOLD + "%s" + NOR + " �� " + BOLD + "%s" + NOR + "��\n",
                                implode(dirs[0..sizeof(dirs)-2], "��"), dirs[sizeof(dirs)-1]);
        }
//      str += env->door_description();

        inv = all_inventory(env);
        for(i=0; i<sizeof(inv); i++) {
                if( inv[i]==me ) continue;
                if( !me->visible(inv[i]) ) continue;
                if( inv[i]->query("no_shown")) continue;
                str += "  " + inv[i]->short() + "\n";
        }

        write(str);
        return 1;
}

int look_item(object me, object obj)
{
        mixed *inv;
	int max_damage,damage;
	int protect;

        write(obj->long());
// add by oldsix for show armor's ����
	if(obj->query("armor_type") && obj->query("armor_type")!="cloth"
		&& obj->query("armor_type")!="neck")
	{
		if (! damage=obj->query("oldsix/damage"))	damage=0;
		if (! max_damage=obj->query("oldsix/max_damage"))	max_damage=10;
		if(damage>=max_damage/3*2)
			write("����ȣ�"+HIR+damage+"/"+max_damage+NOR"\n");
		else	write("����ȣ�"+damage+"/"+max_damage+"\n");
		if(! protect=obj->query("oldsix/protect"))	protect=2;
		write("�����ȣ�"+protect+"��\n");
	}
//������ЩĿ�����Ҫ�򿪲��ܿ��� add by xxy.
   if (!obj->query("vacuous/status"))   {
        inv = all_inventory(obj);
        if( sizeof(inv) ) {
                inv = map_array(inv, "inventory_look", this_object() );
                message("vision", sprintf("�����У�\n  %s\n",
                        implode(inv, "\n  ") ), me);        
        }
   }
        return 1;
}

// change by snow
string getper(object me, object obj)
{
        int per;
        int spi;

        int weight;
        string str;

        per = obj->query("per");
        spi = me->query("spi");

// ���Բ���˿��Ĳ�׼
        if (spi>35) weight = 0;
        else weight = (int)(35 - spi)/4 ;


        if (random(10)>6) per = per - weight;
        else per = per + weight ;
        if ((string) obj->query("gender") == "����" || (string) obj->query("gender") == "����")
        {
                if (per >= 30) str="�������������ٷ磬�������Σ�����֮�䣬��ɷ���������������\n";
                if ((per >= 26) && (per < 30))
                        str="Ӣ������������������������棬��Ŀ���ʣ�ò���˰���\n";
                if ((per >= 22) && (per < 26))
                        str="��òӢ�����Ǳ����á��Ǹ����棬���˷��ס�\n";
                if ((per >= 18) && (per < 22))
                        str="��ٶ�����\n";
                if ((per >= 15) && (per < 18))
                        str="��òƽƽ��ûʲô�ÿ��ġ�\n";
                if (per < 15)
                        str="����...�е�Բ�ס���ˡ�\n";
        }
        else
        {
            if ((string) obj->query("gender") == "Ů��")
            {
                if (per >= 30)
                        str="��������֮ò����ɫ���������޾��ף������˼����ӣ�\n�������ƣ�����ʤѩ���绪��������֪�㵹�˶���Ӣ�ۺ��ܡ�\n";
                if ((per >= 28) && (per < 30))
                        str="�������ף����˶��ˡ��г�������֮�ݣ������߻�֮ò��\n������������Ŀ���飬������ɣ�����һЦ������������Ȼ�Ķ���\n";
                if ((per >= 26) && (per < 28))
                        str="������֬��üĿ�续���������֣��������ˡ��������Ҽ�������\n";
                if ((per >= 24) && (per < 26))
                        str="��ɫ����������κ죬�ۺ��ﲨ������Ͷ��֮�䣬ȷ��һ�����ϡ�\n";
// ���潿�ݻ���¶������ϸ�������̡�
                if ((per >= 21) && (per < 24))
                        str="���ʸ��ţ���Ŀ毺ã����㲻�Ͼ������ˣ�Ҳ���м�����ɫ��\n";
                if ((per >= 18) && (per < 21))
                        str="��òƽƽ�������ù�ȥ��\n";
                if ((per >= 15) && (per <18))
                        str="����ò��...�������ɡ�\n";
                if (per < 15)
                        str="��,���ú������е�����Ү��\n";
            }
            else
            {
                if (living(obj))
		{
                if (!obj->query_temp("owner"))
                   str="��һֻδ��ѱ�����������۹������ǽ��ĺ͵��⡣\n";
                else
                   str="��һֻ��"+obj->query_temp("ownername")+"ѱ����������һ������ѱ�����ӡ�\n";
		}
            }
      }


//        if ((string) obj->query("gender") == "����") {
//                if (per > 30) str = "����ò����,������һ��\n";
//                if ((per >= 25) && (per <=30)) 
//                        str = "��Ӣ������,ò���˰���\n";
//                if ((per >= 19) && (per < 25)) 
//                        str = "����ٶ�����\n";
//                if (per < 19) 
//                        str = "����òƽƽ��\n";
//        }
//        else {
//                if (per > 30)
//                        str = "����ۼ����,�����˼�����!!!!\n";
//                if ((per >= 25) && (per <= 30)) 
//                        str = "���г�������֮��,�����߻�֮ò!!!\n";
//                if ((per >= 20) && (per < 25)) 
//                        str = "����������,��������!!\n"; 
//                if ((per >= 15) && (per < 20))
//                        str = "����òƽƽ,�����ù�ȥ��\n";
//                if (per < 15) 
//                        str = "������ò��...�������ɡ�\n";
//        }

        return str;
}

int look_living(object me, object obj)
{
        string str, limb_status, pro;
        mixed *inv;
        mapping my_fam, fam;
        int equip, wearornot;

        if( me!=obj )
                message("vision", me->name() + "�������㿴����֪����Щʲ�����⡣\n", obj);

        str = obj->long();

        pro = (obj==me) ? gender_self(obj->query("gender")) : gender_pronoun(obj->query("gender"));

        if( (string)obj->query("race")=="����"
        &&      intp(obj->query("age")) )
                str += sprintf("%s������Լ%s���ꡣ\n", pro, chinese_number(obj->query("age") / 10 * 10));

// change by snow
// you can look a person's personality

        if ( me->query("age") > 14 ) {
                if (obj==me) str += sprintf("�㿴���������е���ѽ!\n");
                else {
                        if (obj->query("age") > 14) {
                                str += getper(me, obj);
                        }
                         
                        else {
                                str += sprintf("14���С����ʲô�ɿ�����?\n");
                        }
                }
        }
        else {
                str += sprintf("���14���Ҫ����,��ʲôҲ����ѽ.\n");
        }

if((string)obj->query("marry")==(string)me->query("id") )
        {
              if( (string)me->query("gender")=="Ů��" )
              {
                    str += sprintf("%s������ɷ�\n", pro);
              }
              else{
                    str += sprintf("%s��������ӡ�\n", pro);
              }
        }
        if (me->query("jiebai"))
        if (strsrch(me->query("jiebai"), obj->query("id")+">") >= 0)
        {
              if( obj->query("gender")=="Ů��" )
              {
                    if (obj->query("mud_age") > me->query("mud_age"))
                        str += sprintf("%s�������㡣\n", pro);
                    else
                        str += sprintf("%s����Ľ������ӡ�\n", pro);
              }
              else{
                    if (obj->query("mud_age") > me->query("mud_age"))
                        str += sprintf("%s����Ľ����ֳ���\n", pro);
                    else
                        str += sprintf("%s�������ܡ�\n", pro);
              }
        }

        // If we both has family, check if we have any relations.
        if( obj!=me
        &&      mapp(fam = obj->query("family"))
        &&      mapp(my_fam = me->query("family")) 
        &&      fam["family_name"] == my_fam["family_name"] ) {

                if( fam["generation"]==my_fam["generation"] ) {
                        if( (string)obj->query("gender") == "����" )
                                str += sprintf( pro + "�����%s%s��\n",
                                        my_fam["master_id"] == fam["master_id"] ? "": "ͬ��",
                                        my_fam["enter_time"] > fam["enter_time"] ? "ʦ��": "ʦ��");
                        else
                                str += sprintf( pro + "�����%s%s��\n",
                                        my_fam["master_id"] == fam["master_id"] ? "": "ͬ��",
                                        my_fam["enter_time"] > fam["enter_time"] ? "ʦ��": "ʦ��");
                } else if( fam["generation"] < my_fam["generation"] ) {
                        if( my_fam["master_id"] == obj->query("id") )
                                str += pro + "�����ʦ����\n";
                        else if( my_fam["generation"] - fam["generation"] > 1 )
                                str += pro + "�����ͬ�ų�����\n";
                        else if( fam["enter_time"] < my_fam["enter_time"] )
                                str += pro + "�����ʦ����\n";
                        else
                                str += pro + "�����ʦ�塣\n";
                } else {
                        if( fam["generation"] - my_fam["generation"] > 1 )
                                str += pro + "�����ͬ������\n";
                        else if( fam["master_id"] == me->query("id") )
                                str += pro + "����ĵ��ӡ�\n";
                        else
                                str += pro + "�����ʦֶ��\n";
                }
        }

        if( obj->query("max_kee") )
                str += pro + COMBAT_D->eff_status_msg((int)obj->query("eff_kee") * 100 / (int)obj->query("max_kee")) + "\n";
        wearornot = 0;
        inv = all_inventory(obj);
        for(equip=0; equip<sizeof(inv); equip++)
        {
                if( inv[equip]->query("equipped") ) wearornot = 1;
        }
        if((wearornot == 0 ) && userp(obj) && !wizardp(obj) )
            str += pro+"���Ͼ�Ȼʲô��û��Ү��\n";
 
        if( sizeof(inv) ) {
                inv = map_array(inv, "inventory_look", this_object(), obj->is_corpse()? 0 : 1 );
                inv -= ({ 0 });
                if( sizeof(inv) )
                        str += sprintf( obj->is_corpse() ? "%s�������У�\n%s\n" : "%s���ϴ�����\n%s\n",
                                pro, implode(inv, "\n") );
        }

        message("vision", str, me);

        if( obj!=me 
        &&      living(obj)
        &&      random((int)obj->query("bellicosity")/10) > (int)me->query("per") ) {
                write( obj->name() + "ͻȻת��ͷ������һ�ۡ�\n");
                COMBAT_D->auto_fight(obj, me, "berserk");
        }
	else if( obj!=me
	&&	living(obj)
	&&	( ((int)obj->query("mingwang")<0 && (int)me->query("mingwang")>0)
		|| ((int)obj->query("mingwang")>0 && (int)me->query("mingwang")<0)))
		write( obj->name()+"ͻȻת��ͷ������һ�ۡ�\n");
	else if( obj!=me
	&&	living(obj)
	&&	( ((int)obj->query("shen_type")<0 && (int)me->query("mingwang")>0)
		|| ((int)obj->query("shen_type")>0 && (int)me->query("mingwang")<0)))
		write( obj->name()+"ͻȻת��ͷ������һ�ۡ�\n");

        return 1;
}

string inventory_look(object obj, int flag)
{
        string str;

        str = obj->short();
        if( obj->query("equipped") )
                str = HIC "  ��" NOR + str;
        else if( !flag )
                str = "    " + str;
        else
                return 0;

        return str;
}

int look_room_item(object me, string arg)
{
        object env;
        mapping item, exits;

        if( !objectp(env = environment(me)) )
                return notify_fail("����ֻ�л����ɵ�һƬ��ʲ��Ҳû�С�\n");

        if( mapp(item = env->query("item_desc")) && !undefinedp(item[arg]) ) {
                if( stringp(item[arg]) )
                        write(item[arg]);
                else if( functionp(item[arg]) )
                        write((string)(*item[arg])(me));

                return 1;
        }
        if( mapp(exits = env->query("exits")) && !undefinedp(exits[arg]) ) {
                if( objectp(env = find_object(exits[arg])) )
                        look_room(me, env);
                else {
                        call_other(exits[arg], "???");
                        look_room(me, find_object(exits[arg]));
                }
                return 1;
        }
        return notify_fail("��Ҫ��ʲ�᣿\n");
}

int help (object me)
{
        write(@HELP
ָ���ʽ: look [<��Ʒ>|<����>|<����>]
 
���ָ������鿴�����ڵĻ�����ĳ����Ʒ��������Ƿ���
 
HELP
);
        return 1;
}
