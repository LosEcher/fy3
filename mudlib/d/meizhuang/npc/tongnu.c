// woodcutter.c

inherit NPC;

void create()
{
	set_name("ͯŮ",({"tongnu","tong nu","kid"}));
	set("gender","Ů��");
	set("age",8);
	set("long","����ɰ���СѾͷ��\n");
	set("combat_exp",800);
	setup();
	carry_object("/obj/cloth")->wear();
}
