inherit NPC;

void create()
{
  set_name("���ʱ�",({"wu panbing","wu"}));
  set("gender","����");
set("age",56);
set("nickname","�ʷ�����");
set("combat_exp",6000);
set_skill("unarmed",40);
set_skill("parry",40);
set_skill("dodge",40);
set_skill("literate",20);
set("chat_chance",5);
set("chat_msg",({
"���ʱ��ñʸ��������Դ�,һ����Ȼ�����ģ��.\n",
"���ʱ�ʹ�����������ߺ���ʱ�,�����۵��ڵ�.\n",
"���ʱ���:��ҽ֮��,Ҫ��[���ݸ�Ŀ]Ϊһ����.\n",
}));
setup();
carry_object("/obj/armor/guardsuit")->wear();
}
