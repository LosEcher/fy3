#include <ansi.h>
inherit F_SAVE;
inherit NPC;

int do_jiaru(object target);
// this function is used to improve NPC's zhongcheng
// and to hire these NPC
int accept_object(object target,object obj)
{
	mapping data;
	string *who;
	string stuffid,stuffname;
        if(! query("zhengzhao"))        return 0;
        if(! target->query("banghui"))  {
                command("say ��Ȼ"+RANK_D->query_respect(target)
                +"��˿��������Ҿ������ˡ�\n");
                return 1;
        }
        if( target->query("banghui")==(string)this_object()->query("banghui")) {
		command("say ���ǰ����ֵܣ��α���˿�����\n");
		return 0;
        }
        if(query("zhengzhao")==1)       {
                command("say "+RANK_D->query_self(this_object())
                +"ֻ���书����Ȥ������һ����̸��\n");
                return 0;
        }
        if(query("zhengzhao")==2)       {
		if(query_temp("oldsix/target")!=target)	{
                        command("say �޹�����»����֪"+RANK_D->query_respect(target)+"����"+obj->query("name")+"�к����⣿\n");

                        return 0;

                }
                if(!obj->query("money_id"))     {
                        command("say "+RANK_D->query_self_rude(this_object())
                        +"ֻ��Ǯ����Ȥ������������Լ����Űɡ�\n");
                        return 0;
                }
                if(obj->value()<query_temp("money")*10) {
                        command("say �Ҳ���˵������"+
                        chinese_number(query_temp("money")/1000)
                        +"���ƽ���һ����Ҳ���У�\n");
                        return 0;
                }
		if(query("banghui")&&query("zhongcheng")>target->query_per())	{
			command("say �����������Ǯ������ζԵ�������������֣�\n");
			return 0;
		}
		return do_jiaru(target);
        }
        if(query("zhengzhao")==3)       {
		data=query_temp("oldsix/target");
		if(! mapp(data))	data=([]);
		who=keys(data);
		if(member_array(target->query("id"),who)==-1)        {
                        command("say �����ز���ʶ��Ϊ�θ�"+
                        RANK_D->query_self(this_object())+obj->query("name")+
                        "��\n");
                        return 0;
                }
		sscanf(data[target->query("id")],"%s:%s",stuffid,stuffname);
		if(stuffname != obj->query("name") ||
			stuffid != obj->query("id"))	{
                        command("say "+RANK_D->query_respect(target)+
			"������Ҫ����"+stuffname+"("+
			stuffid+")������"+obj->query("name")+
                        "("+obj->query("id")+")��\n");
                        return 0;
                }
		if(query("banghui")&&query("zhongcheng")>target->query_per())	{
			command("say ����������Ķ���������ζԵ�������������֣�\n");
			return 0;
		}
		return do_jiaru(target);
        }
}


// add by oldsix for npc to jiaru banghui;

int do_jiaru(object target)
{
	object lp_me,lp_target;
	object area;
	string bh_me,bh_target;
	mapping data;
	if(! (bh_target=target->query("banghui")))	{
		command("say �ף���û�м����ᣬ������μ����أ�\n");
		return 0;
	}
	if( bh_target==query("banghui"))	{
		command("say ���Ƕ���ͬ����֣����º������\n");
		return 0;
	}
	if(sizeof(children(base_name(this_object())+".c"))>2)	{
		command("say "+RANK_D->query_self_rude(this_object())+
		"���岻�ʣ������´���˵�ɡ�\n");
		return 0;
	}
	lp_target=new("/obj/lingpai");
	lp_target->create(bh_target);
	if(lp_target->query("no_use"))	{
		destruct(lp_target);
		command("say ��İ���ļ������⣬������ʦ��ϵ�ɡ�\n");
		return 0;
	}
	data=lp_target->query("npc");
	if(! mapp(data))	data=([]);
	data[query("id")]=query("name");
	lp_target->set("npc",data);
	lp_target->save();
	if(!undefinedp(target->query("oldsix_quest"))
	&& target->query("oldsix_quest/type")==4)	{
	target->set("oldsix_quest/over",1);
	tell_object(target,"��������Ѿ���ɣ����ȥ����ɡ�\n");
	}
	if(query("area_name")&&query("area_file"))	{
		data=lp_target->query("area");
		if(! mapp(data))	data=([]);
		data[query("area_name")]=query("area_file");
		lp_target->set("area",data);
		lp_target->save();
		area=new("/obj/area");
		area->create(query("area_name"));
		area->set("banghui",bh_target);
		if(! area->query("ziyuan")&& query("ziyuan"))	{
			area->set("ziyuan",query("ziyuan"));
			area->set("kaifa",query("kaifa"));
			area->set("jizhi",query("jizhi"));
		}
		area->save();
		destruct(area);
		if(!undefinedp(target->query("oldsix_quest"))
		&& target->query("oldsix_quest/type")==5)	{
		target->set("oldsix_quest/over",1);
		tell_object(target,"��������Ѿ���ɣ����ȥ����ɡ�\n");
		}
	}
	destruct(lp_target);
	if((bh_me=query("banghui")))	{
		lp_me=new("/obj/lingpai");
		lp_me->create(bh_me);
		if(! lp_me->query("no_use"))	{
		if(query("area_name")&&query("area_file"))	{
			data=lp_me->query("area");
			if(! mapp(data))	data=([]);
			map_delete(data,query("area_name"));
			lp_me->set("area",data);
			lp_me->save();
		}
                "/cmds/usr/tuoli.c"->yes_or_no("yes",this_object(),bh_me);
		}
	destruct(lp_me);
	}
	set("banghui",bh_target);
	add("zhongcheng",(query("max_zhongcheng")-query("zhongcheng"))*10/100);
	save();
	if( query_temp("oldsix/target"))
		delete_temp("oldsix/target");
        command("say ��Ȼ"+RANK_D->query_respect(target)+
                "��˿�����"+RANK_D->query_self(this_object())+
                "������Ҳ���ܶԲ����㰡��\n");
        message_vision("$N���������ᡸ"+target->query("banghui")+"����\n",
                this_object());
        message("channel:rumor",YEL"��ҥ�ԡ�ĳ�ˣ�"+query("name")+
        "�����ᡸ"+bh_target+"����\n"NOR,users());
        if(query("area_name")&&query("area_file"))
        message("channel:rumor",YEL"��ҥ�ԡ�ĳ�ˣ�"+query("area_name")+
        "����ᡸ"+bh_target+"���̲���\n"NOR,users());

	return 1;
}


