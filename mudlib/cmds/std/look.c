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
                write("你的四周灰蒙蒙地一片，什麽也没有。\n");
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
                        str += "    这里没有任何明显的出路。\n";
                else if( sizeof(dirs)==1 )
                        str += "    这里唯一的出口是 " + BOLD + dirs[0] + NOR + "。\n";
                else
                        str += sprintf("    这里明显的出口是 " + BOLD + "%s" + NOR + " 和 " + BOLD + "%s" + NOR + "。\n",
                                implode(dirs[0..sizeof(dirs)-2], "、"), dirs[sizeof(dirs)-1]);
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
// add by oldsix for show armor's 破损
	if(obj->query("armor_type") && obj->query("armor_type")!="cloth"
		&& obj->query("armor_type")!="neck")
	{
		if (! damage=obj->query("oldsix/damage"))	damage=0;
		if (! max_damage=obj->query("oldsix/max_damage"))	max_damage=10;
		if(damage>=max_damage/3*2)
			write("破损度："+HIR+damage+"/"+max_damage+NOR"\n");
		else	write("破损度："+damage+"/"+max_damage+"\n");
		if(! protect=obj->query("oldsix/protect"))	protect=2;
		write("防御度："+protect+"点\n");
	}
//测试有些目标物件要打开才能看到 add by xxy.
   if (!obj->query("vacuous/status"))   {
        inv = all_inventory(obj);
        if( sizeof(inv) ) {
                inv = map_array(inv, "inventory_look", this_object() );
                message("vision", sprintf("里面有：\n  %s\n",
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

// 灵性差的人看的不准
        if (spi>35) weight = 0;
        else weight = (int)(35 - spi)/4 ;


        if (random(10)>6) per = per - weight;
        else per = per + weight ;
        if ((string) obj->query("gender") == "男性" || (string) obj->query("gender") == "中性")
        {
                if (per >= 30) str="长得宛如玉树临风，风流倜傥，顾盼之间，神采飞扬。真正是人中龙凤！\n";
                if ((per >= 26) && (per < 30))
                        str="英俊潇洒，气宇轩昂，风度翩翩，面目俊朗，貌似潘安。\n";
                if ((per >= 22) && (per < 26))
                        str="相貌英俊，仪表堂堂。骨格清奇，丰姿非俗。\n";
                if ((per >= 18) && (per < 22))
                        str="五官端正。\n";
                if ((per >= 15) && (per < 18))
                        str="相貌平平。没什么好看的。\n";
                if (per < 15)
                        str="长得...有点对不住别人。\n";
        }
        else
        {
            if ((string) obj->query("gender") == "女性")
            {
                if (per >= 30)
                        str="有倾国倾城之貌，容色丽都，娇艳绝伦，堪称人间仙子！\n长发如云，肌肤胜雪，风华绝代，不知倾倒了多少英雄豪杰。\n";
                if ((per >= 28) && (per < 30))
                        str="清丽绝俗，风姿动人。有沉鱼落雁之容，避月羞花之貌！\n俏脸生春，妙目含情，顾盼神飞，轻轻一笑，不觉让人怦然心动。\n";
                if ((per >= 26) && (per < 28))
                        str="肤如凝脂，眉目如画，风情万种，楚楚动人。当真是我见犹怜！\n";
                if ((per >= 24) && (per < 26))
                        str="容色秀丽，面带晕红，眼含秋波。举手投足之间，确有一番风韵。\n";
// 玉面娇容花含露，纤足细腰柳带烟。
                if ((per >= 21) && (per < 24))
                        str="气质高雅，面目姣好，虽算不上绝世佳人，也颇有几份姿色。\n";
                if ((per >= 18) && (per < 21))
                        str="相貌平平，还看得过去。\n";
                if ((per >= 15) && (per <18))
                        str="的相貌嘛...马马虎虎吧。\n";
                if (per < 15)
                        str="咦,长得和无盐有点相似耶。\n";
            }
            else
            {
                if (living(obj))
		{
                if (!obj->query_temp("owner"))
                   str="是一只未被驯服的畜生，眼光里满是戒心和敌意。\n";
                else
                   str="是一只被"+obj->query_temp("ownername")+"驯服的畜生，一副很温驯的样子。\n";
		}
            }
      }


//        if ((string) obj->query("gender") == "男性") {
//                if (per > 30) str = "他相貌出众,百里挑一。\n";
//                if ((per >= 25) && (per <=30)) 
//                        str = "他英俊潇洒,貌似潘安。\n";
//                if ((per >= 19) && (per < 25)) 
//                        str = "他五官端正。\n";
//                if (per < 19) 
//                        str = "他相貌平平。\n";
//        }
//        else {
//                if (per > 30)
//                        str = "她美奂绝伦,堪称人间仙子!!!!\n";
//                if ((per >= 25) && (per <= 30)) 
//                        str = "她有沉鱼落雁之容,避月羞花之貌!!!\n";
//                if ((per >= 20) && (per < 25)) 
//                        str = "她风情万种,楚楚动人!!\n"; 
//                if ((per >= 15) && (per < 20))
//                        str = "她相貌平平,还看得过去。\n";
//                if (per < 15) 
//                        str = "她的相貌嘛...马马虎虎吧。\n";
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
                message("vision", me->name() + "正盯著你看，不知道打些什麽主意。\n", obj);

        str = obj->long();

        pro = (obj==me) ? gender_self(obj->query("gender")) : gender_pronoun(obj->query("gender"));

        if( (string)obj->query("race")=="人类"
        &&      intp(obj->query("age")) )
                str += sprintf("%s看起来约%s多岁。\n", pro, chinese_number(obj->query("age") / 10 * 10));

// change by snow
// you can look a person's personality

        if ( me->query("age") > 14 ) {
                if (obj==me) str += sprintf("你看来很象镜子中的你呀!\n");
                else {
                        if (obj->query("age") > 14) {
                                str += getper(me, obj);
                        }
                         
                        else {
                                str += sprintf("14岁的小孩有什么可看的呢?\n");
                        }
                }
        }
        else {
                str += sprintf("你才14岁就要看吗,你什么也不懂呀.\n");
        }

if((string)obj->query("marry")==(string)me->query("id") )
        {
              if( (string)me->query("gender")=="女性" )
              {
                    str += sprintf("%s是你的丈夫。\n", pro);
              }
              else{
                    str += sprintf("%s是你的妻子。\n", pro);
              }
        }
        if (me->query("jiebai"))
        if (strsrch(me->query("jiebai"), obj->query("id")+">") >= 0)
        {
              if( obj->query("gender")=="女性" )
              {
                    if (obj->query("mud_age") > me->query("mud_age"))
                        str += sprintf("%s是你的义姐。\n", pro);
                    else
                        str += sprintf("%s是你的结义妹子。\n", pro);
              }
              else{
                    if (obj->query("mud_age") > me->query("mud_age"))
                        str += sprintf("%s是你的结义兄长。\n", pro);
                    else
                        str += sprintf("%s是你的义弟。\n", pro);
              }
        }

        // If we both has family, check if we have any relations.
        if( obj!=me
        &&      mapp(fam = obj->query("family"))
        &&      mapp(my_fam = me->query("family")) 
        &&      fam["family_name"] == my_fam["family_name"] ) {

                if( fam["generation"]==my_fam["generation"] ) {
                        if( (string)obj->query("gender") == "男性" )
                                str += sprintf( pro + "是你的%s%s。\n",
                                        my_fam["master_id"] == fam["master_id"] ? "": "同门",
                                        my_fam["enter_time"] > fam["enter_time"] ? "师兄": "师弟");
                        else
                                str += sprintf( pro + "是你的%s%s。\n",
                                        my_fam["master_id"] == fam["master_id"] ? "": "同门",
                                        my_fam["enter_time"] > fam["enter_time"] ? "师姐": "师妹");
                } else if( fam["generation"] < my_fam["generation"] ) {
                        if( my_fam["master_id"] == obj->query("id") )
                                str += pro + "是你的师父。\n";
                        else if( my_fam["generation"] - fam["generation"] > 1 )
                                str += pro + "是你的同门长辈。\n";
                        else if( fam["enter_time"] < my_fam["enter_time"] )
                                str += pro + "是你的师伯。\n";
                        else
                                str += pro + "是你的师叔。\n";
                } else {
                        if( fam["generation"] - my_fam["generation"] > 1 )
                                str += pro + "是你的同门晚辈。\n";
                        else if( fam["master_id"] == me->query("id") )
                                str += pro + "是你的弟子。\n";
                        else
                                str += pro + "是你的师侄。\n";
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
            str += pro+"身上居然什么都没穿耶！\n";
 
        if( sizeof(inv) ) {
                inv = map_array(inv, "inventory_look", this_object(), obj->is_corpse()? 0 : 1 );
                inv -= ({ 0 });
                if( sizeof(inv) )
                        str += sprintf( obj->is_corpse() ? "%s的遗物有：\n%s\n" : "%s身上带著：\n%s\n",
                                pro, implode(inv, "\n") );
        }

        message("vision", str, me);

        if( obj!=me 
        &&      living(obj)
        &&      random((int)obj->query("bellicosity")/10) > (int)me->query("per") ) {
                write( obj->name() + "突然转过头来瞪你一眼。\n");
                COMBAT_D->auto_fight(obj, me, "berserk");
        }
	else if( obj!=me
	&&	living(obj)
	&&	( ((int)obj->query("mingwang")<0 && (int)me->query("mingwang")>0)
		|| ((int)obj->query("mingwang")>0 && (int)me->query("mingwang")<0)))
		write( obj->name()+"突然转过头来瞪你一眼。\n");
	else if( obj!=me
	&&	living(obj)
	&&	( ((int)obj->query("shen_type")<0 && (int)me->query("mingwang")>0)
		|| ((int)obj->query("shen_type")>0 && (int)me->query("mingwang")<0)))
		write( obj->name()+"突然转过头来瞪你一眼。\n");

        return 1;
}

string inventory_look(object obj, int flag)
{
        string str;

        str = obj->short();
        if( obj->query("equipped") )
                str = HIC "  □" NOR + str;
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
                return notify_fail("这里只有灰蒙蒙地一片，什麽也没有。\n");

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
        return notify_fail("你要看什麽？\n");
}

int help (object me)
{
        write(@HELP
指令格式: look [<物品>|<生物>|<方向>]
 
这个指令让你查看你所在的环境、某件物品、生物、或是方向。
 
HELP
);
        return 1;
}
