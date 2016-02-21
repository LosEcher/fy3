// zhang1.c
#include <ansi.h>
inherit NPC;

int shang_ya();
void create()
{
    set_name("�ų˷�", ({"zhang chengfeng", "zhang", "chengfeng"}));
    set("nickname", HIY "�����ħ" NOR );
    set("banghui", "���½�");
	set("bh_rank","����");
    set("gender", "����");
    set("age", 42);
    set("shen_type", -1);
    set("long",
        "����������̳��ϡ�\n");
    set("attitude", "peaceful");

    set("per", 21);
    set("str", 30);
    set("int", 30);
    set("con", 30);
    set("dex", 30);

    set("kee", 3000);
    set("max_kee", 3000);
    set("gin", 1000);
    set("max_gin", 1000);
    set("force", 3000);
    set("max_force", 3000);
    set("force_factor", 300);

    set("combat_exp", 1500000);
    set("score", 0);
    set("inquiry", ([
        "��ľ��" : "���̵��ӻ�ֽ������Ʒ������£�\n",
        "�������" : "���̵��ӻ�ֽ������Ʒ������£�\n",
        "���½�" : "���̵��ӻ�ֽ������Ʒ������£�\n",
        "��ľ��" : "���Ǳ��̽������ƣ���������������٣�\n",
        "����" :   (: shang_ya :),
    ]) );

	set_skill("force",180);
	set_skill("hunyuan-yiqi",180);
	set_skill("unarmed",180);
	set_skill("dodge",180);
	set_skill("shaolin-shenfa",180);
	set_skill("parry",180);
	set_skill("club",200);
	set_skill("weituo-gun",200);
	set_skill("houquan",200);

	map_skill("force","hunyuan-yiqi");
    map_skill("club", "weituo-gun");
    map_skill("parry", "weituo-gun");
	map_skill("dodge","shaolin-shenfa");
	map_skill("unarmed","houquan");

    setup();
    carry_object(__DIR__"obj/shutonggun")->wield();
carry_object("/obj/cloth")->wear();
}

int shang_ya()
{
    object ob, myenv ;
    ob = this_player ( ) ;
    if (ob->query("banghui") == "���½�")
    {
        message_vision("�ų˷�һ���֣���������һ���������\n",ob);
        message_vision("$Nһ�������˵��������������ؽ�����ȥ......\n", ob);
        myenv = environment (ob) ;
        ob->move ("/d/heimuya/basket");
	call_out("goto_heimuya", 10, ob) ;
       	return 1;
    }
    else  
    message_vision("�ų˷��������´�����$Nһ�£�ʲô�����£���ĺ�ľ���أ���\n",ob);
    return 1;
}

int accept_object(object who, object ob)
{
    object myenv ;
    if (ob->query("id") == "heimu ling")
    {
        message_vision("�ų˷��$N˵���ã���λ" + RANK_D->query_respect(who) + "�����Ǿ���ɣ�\n" , who);
        message_vision("�ų˷�һ���֣���������һ���������\n", who);
        message_vision("$Nһ�������˵��������������ؽ�����ȥ......\n", who);
        myenv = environment (who) ;
        who->move ("/d/heimuya/basket");
	call_out("goto_heimuya",10,who) ;
       	return 1;
    }
    else  
    {
	message_vision("�ų˷��$N˵�����ˣ�ң���\n", who);
        this_object()->kill_ob(who);
    }
    return 0;
}

void goto_heimuya (object ob)
{
    tell_object(ob , "����ǰһ����һ������ɫ����������ǰ�����ǻԻ͡�\n");
    ob->move ("/d/heimuya/chengdedian") ;
}
int recognize_apprentice(object ob)
{
        string banghui;
        if(! stringp(banghui=ob->query("banghui")) ||
                banghui!=query("banghui"))
        return notify_fail(query("name")+"ҡͷ�������ҷ��׷ǹʣ�"+
                RANK_D->query_self(this_object())+"��θҵ���\n");
	if(ob->query("score")<1000)
        return notify_fail(query("name")+"�����㻹�Ƕ�Ϊ������Щʵ�°ɡ�\n");
        return 1;
}
