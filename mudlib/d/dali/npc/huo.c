// huo.c

inherit NPC;

int ask_for_gongzi();

void create()
{
        set_name("������", ({"huo xiansheng", "huo", "xiansheng"}));
        set("long",
"��һ�����ݣ�����ί�����������Ժ�����˯����ģ����������������ʮ�������޿����ޡ�
ԭ�������Ƿ�ţ�ɵĴް�Ȫ��Ϊ�ܳ�������ڴˡ�\n"
        );

        set("gender", "����");
        set("attitude", "heroism");

        set("inquiry",([
                "����"    : (: ask_for_gongzi :),
                "нˮ"    : (: ask_for_gongzi :),
                "salary"  : (: ask_for_gongzi :),
                "payment" : (: ask_for_gongzi :),
                "gongzi"  : (: ask_for_gongzi :),
        ]));

        set("age", 51);
        set("shen_type", 0);
        set("str", 25);
        set("int", 20);
        set("con", 20);
        set("dex", 25);
        set("max_kee", 500);
        set("max_gin", 100);
        set("force", 500);
        set("max_force", 500);
        set("force_factor", 100);
        set("combat_exp", 100000);
        set("score", 100);
        set("apply/attack",  30);
        set("apply/defense", 30);

        set_skill("force", 50);
        set_skill("unarmed", 50);
        set_skill("sword", 50);
        set_skill("dodge", 50);
        set_skill("parry", 50);

        setup();

carry_object("/obj/weapon/sword")->wield();
carry_object("/obj/cloth")->wear();
        add_money("silver", 50);
}

int ask_for_gongzi()
{
        object me,payment;
	int money;
        int paytimes;
	string oldtitle;

        me = this_player();
	oldtitle = me->query("title");
	if (strsrch(oldtitle, "������������")==-1)	{
		tell_object(me,"�ף����д�����ƾʲô����Ǯ��\n");
		return 1;
	}
	if (strsrch(oldtitle, "�������������Ҷ�")>=0)	money=1;
	else if (strsrch(oldtitle, "����������������")>=0)	money=5;
	else if (strsrch(oldtitle, "�������������佫")>=0)	money=10;
	else	{
		tell_object(me,"����ûǮ��ҪǮ����ʦȥ��\n");
		return 1;
	}
	    paytimes = (int)(me->query("mud_age")/7200);
	    if (me->query("dlpaytimes")<paytimes)
	    {
	        payment=new("/obj/money/gold");
		payment->set_amount(money);
	        payment->move(me);
		me->set("dlpaytimes",paytimes);
	        tell_object(me,"���������������㱾�µķݶ�պðɡ�\n");
		tell_object(me,query("name")+"��С������ó�"+
		chinese_number(money)+"���ƽ�����㡣\n");
	    }
	    else tell_object(me,"�����������۸����Ϻ�Ϳ���㱾�¹����Ѿ���ȡ���ˣ�\n");
        return 1;
}

