//Mr.music yangzhou �ʲ�

inherit NPC;

string send_mail();
string receive_mail();

void create()
{
	set_name("�ʲ�", ({"youchai", "postofficer", }) );
	set("title", "������վ��");
	set("gender", "����" );
	set("age", 33);
	set("long",
               "������վ���ʲ�");
        set("mingwang",1);
	set("combat_exp", 5000);
	set("attitude", "friendly");
	set("inquiry", ([
                "mail" : "��֪��������Ż��ǿ���? \n" ,
		"����" : (: send_mail :),
                "send" : (: send_mail :),
                "jixin" : (: send_mail :),
		"����" : (: receive_mail :),
                "receive" : (: receive_mail :),
                "kanxin" : (: receive_mail :),
	]) );
	set_skill("literate", 20);
	set_skill("dodge", 50);
	set_skill("unarmed", 40);
	setup();
	add_money("coin", 20);
}

string send_mail()
{
	object mbox;

	if( this_player()->query_temp("mbox_ob") )
		return "���������ϵ�ʹ��˵���ɡ�\n";
	if( !environment()
	||	base_name(environment()) != query("startroom") )
		return "���Ǳ�Ǹ��������һ�µ���վ�����Ұɡ�\n";
	seteuid(getuid());
	mbox = new(MAILBOX_OB);
	mbox->move(this_player());
        say("�ʲ�ݸ�"+this_player()->query("name")+"һ�����䡣\n");
	return "�������������䣬���ŵķ�����������˵����\n";
}

string receive_mail()
{
	object mbox;

	if( this_player()->query_temp("mbox_ob") )
		return "�������䣿�����е��Ŷ������档\n";
	if( !environment()
	||	base_name(environment()) != query("startroom") )
		return "���Ǳ�Ǹ��������һ�µ���վ�����Ұɡ�\n";
	seteuid(getuid());
	mbox = new(MAILBOX_OB);
	mbox->move(this_player());
        say("�ʲ�ݸ�"+this_player()->query("name")+"һ�����䡣\n");
	return "����������⣬�������������ɡ�\n";
}
